import java.io.File
import java.time.LocalDateTime
import kotlin.concurrent.thread
import kotlin.random.Random

object SystemInfo {
    fun show() {
        println("=== SYSTEM INFO ===")
        println("OS        : ${System.getProperty("os.name")}")
        println("User      : ${System.getProperty("user.name")}")
        println("Java Ver  : ${System.getProperty("java.version")}")
        println("Kotlin   : ${KotlinVersion.CURRENT}")
        println("===================")
    }
}

class Logger(private val fileName: String) {
    fun log(msg: String) {
        File(fileName).appendText("${LocalDateTime.now()} : $msg\n")
    }
}

fun cpuWork(limit: Int): Long =
    (1..limit).sumOf { it.toLong() * it }

fun main() {
    SystemInfo.show()

    val logger = Logger("log.txt")
    logger.log("Program started")

    print("Enter your name: ")
    val name = readLine().orEmpty()

    println("\nWelcome, ${if (name.isBlank()) "Kotlin Dev" else name} 👋")
    logger.log("User entered name: $name")

    println("\nRunning CPU tasks using threads...")

    val limits = listOf(1_000_000, 2_000_000, 3_000_000, 4_000_000)
    val results = mutableListOf<Long>()
    val threads = mutableListOf<Thread>()

    for (l in limits) {
        val t = thread {
            results += cpuWork(l)
        }
        threads += t
    }

    threads.forEach { it.join() }

    val total = results.sum()
    println("CPU Test Result: $total")
    logger.log("CPU test completed")

    println("\nGenerating random numbers...")
    val nums = List(10) { Random.nextInt(0, 100) }
    println("List   : $nums")
    println("Sorted : ${nums.sorted()}")

    logger.log("Collections tested")

    println("\nSimulating workload...")
    repeat(5) {
        println("Task ${it + 1}/5 completed")
        Thread.sleep(500)
    }

    println("\n✅ Kotlin compiler is WORKING!")
    println("Log file created: log.txt")
    logger.log("Program finished")
}
