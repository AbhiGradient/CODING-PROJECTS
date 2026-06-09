import java.util.concurrent.ConcurrentLinkedQueue
import java.util.concurrent.atomic.AtomicInteger
import kotlin.math.sqrt
import kotlin.system.measureTimeMillis

data class PrimeResult(
    val threadId: Int,
    val primeCount: Int
)

class PrimeWorker(
    private val id: Int,
    private val jobs: ConcurrentLinkedQueue<Int>,
    private val totalPrimes: AtomicInteger
) : Runnable {

    private fun isPrime(n: Int): Boolean {
        if (n < 2) return false

        val limit = sqrt(n.toDouble()).toInt()

        for (i in 2..limit) {
            if (n % i == 0) return false
        }

        return true
    }

    override fun run() {
        var localCount = 0

        while (true) {
            val number = jobs.poll() ?: break

            if (isPrime(number)) {
                localCount++
            }
        }

        totalPrimes.addAndGet(localCount)

        println(
            "Thread-$id finished -> $localCount primes"
        )
    }
}

class BenchmarkEngine(
    private val maxNumber: Int,
    private val workerCount: Int
) {

    fun execute() {

        val jobs = ConcurrentLinkedQueue<Int>()

        for (i in 2..maxNumber) {
            jobs.add(i)
        }

        val totalPrimes = AtomicInteger(0)

        val threads = mutableListOf<Thread>()

        val elapsed = measureTimeMillis {

            repeat(workerCount) { index ->

                val worker =
                    PrimeWorker(
                        index + 1,
                        jobs,
                        totalPrimes
                    )

                val thread = Thread(worker)

                threads.add(thread)

                thread.start()
            }

            threads.forEach {
                it.join()
            }
        }

        println()
        println("====================================")
        println("Range Tested : 2 -> $maxNumber")
        println("Workers      : $workerCount")
        println("Prime Count  : ${totalPrimes.get()}")
        println("Time Taken   : ${elapsed} ms")
        println("====================================")
    }
}

fun main() {

    val cpuCores =
        Runtime.getRuntime().availableProcessors()

    println("====================================")
    println("KOTLIN PRIME ANALYZER")
    println("====================================")
    println("CPU Cores : $cpuCores")
    println()

    val engine =
        BenchmarkEngine(
            maxNumber = 5_000_000,
            workerCount = cpuCores
        )

    engine.execute()
}