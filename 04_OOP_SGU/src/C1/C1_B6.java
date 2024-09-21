package C1;

import java.util.Scanner;

public class C1_B6 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        long n = sc.nextLong();
        checkPrime(n);
    }

    public static void checkPrime(long n){
        for(long i = 2; i*i <= n; i++){
            if(n % i == 0){
                System.out.println("Khong phai snt");
                return;
            }
        }
        if(n > 2){
            System.out.println("snt");
        }
    }
}
