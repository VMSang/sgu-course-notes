package C1;

import java.util.Scanner;

public class C1_B4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        long n = sc.nextLong();
        System.out.println((n % 2 == 0) ? "chan" : "le");
    }
}
