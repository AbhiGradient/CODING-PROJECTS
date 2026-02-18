package main

import (
	"fmt"
	"os"
	"runtime"
	"time"
	"math/rand"
	"sort"
	"sync"
)

type SystemInfo struct{}

func (s SystemInfo) Print() {
	fmt.Println("=== SYSTEM INFO ===")
	fmt.Println("OS        :", runtime.GOOS)
	fmt.Println("Arch      :", runtime.GOARCH)
	fmt.Println("Go Ver    :", runtime.Version())
	fmt.Println("CPUs      :", runtime.NumCPU())
	fmt.Println("===================")
}

type FileLogger struct {
	file *os.File
}

func NewFileLogger(path string) *FileLogger {
	f, err := os.OpenFile(path, os.O_CREATE|os.O_APPEND|os.O_WRONLY, 0644)
	if err != nil {
		panic("cannot open log file")
	}
	return &FileLogger{file: f}
}

func (l *FileLogger) Log(msg string) {
	t := time.Now().Format("2006-01-02 15:04:05")
	l.file.WriteString(t + " : " + msg + "\n")
}

func (l *FileLogger) Close() {
	l.file.Close()
}

func cpuWorker(limit int, wg *sync.WaitGroup, ch chan<- int64) {
	defer wg.Done()
	var sum int64
	for i := 1; i <= limit; i++ {
		sum += int64(i * i)
	}
	ch <- sum
}

func main() {
	rand.Seed(time.Now().UnixNano())

	SystemInfo{}.Print()

	logger := NewFileLogger("log.txt")
	defer logger.Close()

	logger.Log("Program started")

	fmt.Print("Enter your name: ")
	var name string
	fmt.Scanln(&name)

	fmt.Println("\nWelcome,", name, "👋")
	logger.Log("User entered name: " + name)

	fmt.Println("\nRunning CPU test (goroutines)...")

	ch := make(chan int64, 4)
	var wg sync.WaitGroup

	limits := []int{1_000_000, 2_000_000, 3_000_000, 4_000_000}

	for _, l := range limits {
		wg.Add(1)
		go cpuWorker(l, &wg, ch)
	}

	go func() {
		wg.Wait()
		close(ch)
	}()

	var total int64
	for v := range ch {
		total += v
	}

	fmt.Println("CPU Test Result:", total)
	logger.Log("CPU test completed")

	fmt.Println("\nGenerating random numbers...")
	arr := make([]int, 10)
	for i := range arr {
		arr[i] = rand.Intn(100)
	}

	fmt.Println("Array  :", arr)
	sort.Ints(arr)
	fmt.Println("Sorted :", arr)

	logger.Log("Array operations done")

	fmt.Println("\nSimulating workload...")
	for i := 1; i <= 5; i++ {
		fmt.Printf("Task %d/5 completed\n", i)
		time.Sleep(500 * time.Millisecond)
	}

	fmt.Println("\n✅ Go setup is FULLY WORKING!")
	fmt.Println("Log file created: log.txt")
	logger.Log("Program finished successfully")
}
