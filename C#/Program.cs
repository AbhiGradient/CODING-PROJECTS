using System;
using System.IO;
using System.Linq;
using System.Threading;
using System.Threading.Tasks;
using System.Collections.Generic;

class SystemInfo
{
    public static void Print()
    {
        Console.WriteLine("=== SYSTEM INFO ===");
        Console.WriteLine($"OS        : {Environment.OSVersion}");
        Console.WriteLine($"User      : {Environment.UserName}");
        Console.WriteLine($".NET Ver  : {Environment.Version}");
        Console.WriteLine($"64-bit OS : {Environment.Is64BitOperatingSystem}");
        Console.WriteLine("===================");
    }
}

class CpuWorker
{
    public static long Calculate(int limit)
    {
        long sum = 0;
        for (int i = 1; i <= limit; i++)
        {
            sum += (long)i * i;
        }
        return sum;
    }
}

class FileLogger
{
    private static readonly string path = "log.txt";

    public static void Log(string message)
    {
        File.AppendAllText(path,
            $"{DateTime.Now:yyyy-MM-dd HH:mm:ss} : {message}\n");
    }
}

class Program
{
    static async Task<long> RunCpuTaskAsync(int limit)
    {
        return await Task.Run(() => CpuWorker.Calculate(limit));
    }

    static void Main()
    {
        SystemInfo.Print();
        FileLogger.Log("Program started");

        Console.Write("Enter your name: ");
        string name = Console.ReadLine() ?? "Unknown";

        Console.WriteLine($"\nWelcome, {name} 👋");
        FileLogger.Log($"User entered name: {name}");

        Console.WriteLine("\nRunning CPU test (async + multithreading)...");

        var tasks = new List<Task<long>>
        {
            RunCpuTaskAsync(1_000_000),
            RunCpuTaskAsync(2_000_000),
            RunCpuTaskAsync(3_000_000),
            RunCpuTaskAsync(4_000_000)
        };

        Task.WaitAll(tasks.ToArray());

        long total = tasks.Sum(t => t.Result);
        Console.WriteLine($"CPU Test Result: {total}");
        FileLogger.Log("CPU test completed");

        Console.WriteLine("\nGenerating random numbers...");
        Random rnd = new Random();
        int[] numbers = Enumerable.Range(0, 10)
                                  .Select(_ => rnd.Next(0, 100))
                                  .ToArray();

        Console.WriteLine("Array  : " + string.Join(", ", numbers));
        Console.WriteLine("Sorted : " + string.Join(", ", numbers.OrderBy(n => n)));

        FileLogger.Log("Array operations done");

        Console.WriteLine("\nSimulating workload...");
        for (int i = 1; i <= 5; i++)
        {
            Console.WriteLine($"Task {i}/5 completed");
            Thread.Sleep(500);
        }

        Console.WriteLine("\n✅ C# setup is FULLY WORKING!");
        Console.WriteLine("Log file created: log.txt");

        FileLogger.Log("Program finished successfully");
    }
}