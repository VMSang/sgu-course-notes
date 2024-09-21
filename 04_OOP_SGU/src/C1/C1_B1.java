package C1;

import java.util.Scanner;

public class C1_B1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long value1 = sc.nextInt();
        long value2 = sc.nextInt();

        System.out.printf("a + b = %d", value1 + value2);
        // tong
        System.out.println(value1 + value2);
        // hieu
        System.out.println(value1 - value2);
        // tich
        System.out.println(value1 * value2);
        // thuong
        if(value2 != 0){
            System.out.println(value1 / value2);
        }
    }
}
