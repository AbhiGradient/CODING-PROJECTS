using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

class Program
{
    static async Task Main()
    {
        Console.WriteLine("=== C# SYSTEM TEST ===\n");

        Console.WriteLine($"OS: {Environment.OSVersion}");
        Console.WriteLine($".NET Version: {Environment.Version}");
        Console.WriteLine($"Processors: {Environment.ProcessorCount}");

        List<int> numbers = Enumerable.Range(1, 20).ToList();

        var squares = numbers
            .Select(x => x * x)
            .Where(x => x % 2 == 0)
            .ToList();

        Console.WriteLine("\nEven Squares:");

        foreach (var n in squares)
        {
            Console.Write($"{n} ");
        }

        Console.WriteLine("\n\nRunning Parallel Tasks...\n");

        List<Task<int>> tasks = new();

        Random random = new();

        for (int i = 1; i <= 8; i++)
        {
            int id = i;

            tasks.Add(Task.Run(async () =>
            {
                await Task.Delay(500);

                int value = random.Next(1000);

                Console.WriteLine($"Task {id}: {value}");

                return value;
            }));
        }

        int[] results = await Task.WhenAll(tasks);

        Console.WriteLine($"\nTotal Sum = {results.Sum()}");

        Console.WriteLine("\n=== SUCCESS ===");
    }
}