package C1;

import java.util.Scanner;

public class C1_B3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        final float pi = 3.14f;
        long r = sc.nextLong();

        System.out.printf("chu vi: %f", 2*pi*r);
        System.out.printf("dien tich: %f", pi*r*r);
    }
}
