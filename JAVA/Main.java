import java.io.*;
import java.util.*;
import java.time.*;
import java.util.concurrent.*;

class SystemInfo {
    static void printInfo() {
        System.out.println("=== SYSTEM INFO ===");
        System.out.println("OS        : " + System.getProperty("os.name"));
        System.out.println("User      : " + System.getProperty("user.name"));
        System.out.println("Java Ver  : " + System.getProperty("java.version"));
        System.out.println("Java Home : " + System.getProperty("java.home"));
        System.out.println("===================");
    }
}

class MathWorker implements Callable<Long> {
    private final int limit;

    MathWorker(int limit) {
        this.limit = limit;
    }

    @Override
    public Long call() {
        long sum = 0;
        for (int i = 1; i <= limit; i++) {
            sum += (long) i * i;
        }
        return sum;
    }
}

class FileLogger {
    static void log(String message) {
        try (FileWriter fw = new FileWriter("log.txt", true)) {
            fw.write(LocalDateTime.now() + " : " + message + "\n");
        } catch (IOException e) {
            System.out.println("File write error!");
        }
    }
}

public class Main {

    static void sleep(int ms) {
        try {
            Thread.sleep(ms);
        } catch (InterruptedException ignored) {}
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        SystemInfo.printInfo();
        FileLogger.log("Program started");

        System.out.print("Enter your name: ");
        String name = sc.nextLine();

        System.out.println("\nWelcome, " + name + " 👋");
        FileLogger.log("User entered name: " + name);

        System.out.println("\nRunning CPU test (multithreading)...");
        ExecutorService service = Executors.newFixedThreadPool(4);

        List<Future<Long>> results = new ArrayList<>();
        for (int i = 1; i <= 4; i++) {
            results.add(service.submit(new MathWorker(i * 1_000_000)));
        }

        long total = 0;
        for (Future<Long> f : results) {
            try {
                total += f.get();
            } catch (Exception ignored) {}
        }

        service.shutdown();

        System.out.println("CPU Test Result: " + total);
        FileLogger.log("CPU test completed");

        System.out.println("\nGenerating random numbers...");
        int[] arr = new int[10];
        Random r = new Random();

        for (int i = 0; i < arr.length; i++) {
            arr[i] = r.nextInt(100);
        }

        System.out.println("Array: " + Arrays.toString(arr));
        Arrays.sort(arr);
        System.out.println("Sorted: " + Arrays.toString(arr));

        FileLogger.log("Array operations done");

        System.out.println("\nSimulating workload...");
        for (int i = 1; i <= 5; i++) {
            System.out.println("Task " + i + "/5 completed");
            sleep(500);
        }

        System.out.println("\n✅ Java setup is FULLY WORKING!");
        System.out.println("Log file created: log.txt");

        FileLogger.log("Program finished successfully");
        sc.close();
    }
}
