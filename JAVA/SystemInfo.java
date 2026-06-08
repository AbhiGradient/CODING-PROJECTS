public class SystemInfo {
    public static void main(String[] args) {

        Runtime rt = Runtime.getRuntime();

        System.out.println("Java Version: " + System.getProperty("java.version"));
        System.out.println("OS Name: " + System.getProperty("os.name"));
        System.out.println("Available Processors: " + rt.availableProcessors());

        long maxMem = rt.maxMemory() / (1024 * 1024);
        long totalMem = rt.totalMemory() / (1024 * 1024);

        System.out.println("Max JVM Memory: " + maxMem + " MB");
        System.out.println("Current JVM Memory: " + totalMem + " MB");
    }
}