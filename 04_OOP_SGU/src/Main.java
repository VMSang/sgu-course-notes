import java.util.Scanner;

public class Main {
    Scanner sc = new Scanner(System.in);
    String s = sc.nextLine();

    int k = sc.nextInt();
    String subLeft = s.substring(0, Math.min(k, s.length()));
    String subRight = s.substring(Math.max(0, s.length() - k));

    int k2 = sc.nextInt();
    int n2 = sc.nextInt();
    String nString = s.substring(k, Math.min(k + n2, s.length()));
}
