package org.example

import kotlin.random.Random

data class Sensor(
    val id: Int,
    val name: String,
    val readings: MutableList<Int>
)

fun generateSensors(count: Int): List<Sensor> {
    return (1..count).map { id ->
        Sensor(
            id = id,
            name = "Sensor-$id",
            readings = MutableList(10) { Random.nextInt(20, 100) }
        )
    }
}

fun analyzeSensors(sensors: List<Sensor>) {
    println("---- SENSOR ANALYSIS REPORT ----")

    sensors.forEach { sensor ->
        val avg = sensor.readings.average()
        val max = sensor.readings.maxOrNull()
        val min = sensor.readings.minOrNull()

        println(
            """
            ${sensor.name}
              Readings : ${sensor.readings}
              Average  : ${"%.2f".format(avg)}
              Max      : $max
              Min      : $min
            """.trimIndent()
        )
    }

    val hottestSensor = sensors.maxByOrNull { it.readings.average() }
    println("🔥 Hottest Sensor Overall: ${hottestSensor?.name}")
}

fun main() {
    println("Kotlin + Gradle setup working perfectly ✅\n")

    val sensors = generateSensors(5)
    analyzeSensors(sensors)

    println("\nProgram finished successfully 🚀")
}
