import java.util.*;
import java.util.concurrent.*;

interface Worker {
    void doWork();
}

abstract class Machine {
    protected String name;

    public Machine(String name) {
        this.name = name;
    }

    public abstract void displayInfo();
}

class AIProcessor extends Machine implements Worker {
    private int cores;

    public AIProcessor(String name, int cores) {
        super(name);
        this.cores = cores;
    }

    @Override
    public void displayInfo() {
        System.out.println("Processor: " + name + " | Cores: " + cores);
    }

    @Override
    public void doWork() {
        System.out.println(name + " is processing AI workloads...");
    }
}

class DataGenerator implements Callable<Integer> {
    private int id;

    public DataGenerator(int id) {
        this.id = id;
    }

    @Override
    public Integer call() throws Exception {
        Random random = new Random();
        int result = random.nextInt(1000);
        Thread.sleep(500);
        System.out.println("Thread " + id + " generated: " + result);
        return result;
    }
}

public class ComplexJavaDemo {

    public static <T> void printList(List<T> list) {
        list.forEach(System.out::println);
    }

    public static void main(String[] args) {

        System.out.println("=== COMPLEX JAVA DEMO ===\n");

        AIProcessor cpu = new AIProcessor("Threadripper-Pro", 96);

        cpu.displayInfo();
        cpu.doWork();

        System.out.println("\n=== COLLECTIONS ===");

        List<Integer> numbers = new ArrayList<>();

        for (int i = 1; i <= 20; i++) {
            numbers.add(i);
        }

        List<Integer> squares =
                numbers.stream()
                       .map(x -> x * x)
                       .filter(x -> x % 2 == 0)
                       .toList();

        printList(squares);

        System.out.println("\n=== MULTITHREADING ===");

        ExecutorService executor = Executors.newFixedThreadPool(4);

        List<Future<Integer>> futures = new ArrayList<>();

        for (int i = 1; i <= 8; i++) {
            futures.add(executor.submit(new DataGenerator(i)));
        }

        int sum = 0;

        try {
            for (Future<Integer> future : futures) {
                sum += future.get();
            }
        } catch (Exception e) {
            System.out.println("Error: " + e.getMessage());
        }

        executor.shutdown();

        System.out.println("\nTotal Generated Sum = " + sum);

        System.out.println("\n=== HASHMAP ===");

        Map<String, Integer> scores = new HashMap<>();

        scores.put("Java", 95);
        scores.put("Python", 98);
        scores.put("C++", 90);

        scores.forEach((k, v) ->
                System.out.println(k + " => " + v));

        System.out.println("\n=== SORTING ===");

        List<String> languages =
                new ArrayList<>(Arrays.asList(
                        "Java", "Python", "Rust",
                        "C++", "Go", "TypeScript"));

        languages.sort(String::compareToIgnoreCase);

        printList(languages);

        System.out.println("\n=== FINISHED SUCCESSFULLY ===");
    }
}