package main

import (
	"fmt"
	"math"
	"runtime"
	"sync"
	"time"
)

func isPrime(n int) bool {
	if n < 2 {
		return false
	}

	limit := int(math.Sqrt(float64(n)))

	for i := 2; i <= limit; i++ {
		if n%i == 0 {
			return false
		}
	}

	return true
}

func worker(
	id int,
	jobs <-chan int,
	results chan<- int,
	wg *sync.WaitGroup,
) {
	defer wg.Done()

	count := 0

	for number := range jobs {
		if isPrime(number) {
			count++
		}
	}

	results <- count
}

func main() {

	start := time.Now()

	cpuCount := runtime.NumCPU()

	fmt.Println("===================================")
	fmt.Println(" GO CONCURRENT PRIME ANALYZER")
	fmt.Println("===================================")
	fmt.Println("CPU Cores Available:", cpuCount)

	runtime.GOMAXPROCS(cpuCount)

	const maxNumber = 5_000_000

	jobs := make(chan int, 10000)
	results := make(chan int, cpuCount)

	var wg sync.WaitGroup

	for i := 0; i < cpuCount; i++ {
		wg.Add(1)
		go worker(i, jobs, results, &wg)
	}

	go func() {
		for i := 2; i <= maxNumber; i++ {
			jobs <- i
		}
		close(jobs)
	}()

	wg.Wait()
	close(results)

	totalPrimes := 0

	for count := range results {
		totalPrimes += count
	}

	elapsed := time.Since(start)

	fmt.Println()
	fmt.Println("Range Tested :", 2, "to", maxNumber)
	fmt.Println("Prime Count  :", totalPrimes)
	fmt.Println("Execution    :", elapsed)
	fmt.Println("===================================")
}
