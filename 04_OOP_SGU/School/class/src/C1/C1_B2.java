package C1;

import java.util.Scanner;

public class C1_B2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        long dai = sc.nextLong();
        long rong = sc.nextLong();

        System.out.printf("chu vi: %d", (dai + rong) * 2);
        System.out.printf("chu vi: %d", dai * rong);
    }
}
