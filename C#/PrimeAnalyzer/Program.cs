using System;
using System.Collections.Concurrent;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Threading.Tasks;

class PrimeAnalyzer
{
    static bool IsPrime(long n)
    {
        if (n < 2) return false;
        if (n == 2) return true;
        if (n % 2 == 0) return false;

        long limit = (long)Math.Sqrt(n);

        for (long i = 3; i <= limit; i += 2)
        {
            if (n % i == 0)
                return false;
        }

        return true;
    }

    static async Task Main()
    {
        Console.WriteLine("=================================");
        Console.WriteLine(" MULTI-THREADED PRIME ANALYZER");
        Console.WriteLine("=================================\n");

        Console.Write("Upper Limit: ");
        long max = long.Parse(Console.ReadLine()!);

        Stopwatch sw = Stopwatch.StartNew();

        var primes = new ConcurrentBag<long>();

        await Task.Run(() =>
        {
            Parallel.For(2, max + 1, number =>
            {
                if (IsPrime(number))
                {
                    primes.Add(number);
                }
            });
        });

        sw.Stop();

        var ordered = primes.OrderBy(x => x).ToList();

        Console.WriteLine();
        Console.WriteLine($"Primes Found: {ordered.Count}");
        Console.WriteLine($"Largest Prime: {ordered.Last()}");
        Console.WriteLine($"Execution Time: {sw.ElapsedMilliseconds} ms");

        string report =
$@"Prime Analysis Report
=====================
Range: 1 - {max}

Primes Found: {ordered.Count}
Largest Prime: {ordered.Last()}
Execution Time: {sw.ElapsedMilliseconds} ms

First 100 Primes:
{string.Join(", ", ordered.Take(100))}
";

        File.WriteAllText("PrimeReport.txt", report);

        Console.WriteLine("\nReport saved:");
        Console.WriteLine(Path.GetFullPath("PrimeReport.txt"));
    }
}