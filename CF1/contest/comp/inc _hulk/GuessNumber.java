
    import java.util.Scanner;

public class GuessNumber {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        long low = 1;
        long high = 1000000000;

        for (int i = 0; i < 30; i++) {
            long mid = low + (high - low) / 2;
            System.out.println(mid);
            System.out.flush();
            
            String response = scanner.nextLine();

            if (response.equals("=")) {
                System.out.println(mid);
                break;
            } else if (response.equals(">")) {
                low = mid + 1;
            } else if (response.equals("<")) {
                high = mid - 1;
            }
        }

        scanner.close();
    }
}
}
