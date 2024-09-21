package C1;

import java.util.Scanner;

public class C1_B5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        long n = sc.nextLong();
        if(n == 0) {
            System.out.println("zero");
        } else if(n > 0){
            System.out.println("duong");
        } else {
            System.out.println("am");
        }
    }
}
