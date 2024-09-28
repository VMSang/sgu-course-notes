package C1;

import java.util.Scanner;

public class C1_B7 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        long n = sc.nextLong();
        long sum1 = 0;
//------------------a---------------------------
        for(int i = 0; i <= n; i++){
            System.out.printf("%d ", i);
            sum1 += i;
        }
        System.out.println();
        System.out.println(sum1);
//-------------------b--------------------------
        sum1 = 0;
        for(int i = 0; i <= n; i+=2){
            System.out.printf("%d ", i);
            sum1 += i;
        }
        System.out.println();
        System.out.println(sum1);
//--------------------c-------------------------
        sum1 = 0;
        for(int i = 1; i <= n; i+=2){
            System.out.printf("%d ", i);
            sum1 += i;
        }
        System.out.println();
        System.out.println(sum1);
//--------------------d-------------------------
        for(int i = 0; i <= n; i++){
            if(checkPrime(i)){
                System.out.printf("%d ", i);
                sum1 += i;
            }
        }
        System.out.println();
        System.out.println(sum1);
//---------------------e------------------------
        long cntSNT = 0;
        for(int i = 2; cntSNT <= n; i++){
            if(checkPrime(i)){
                System.out.printf("%d ", i);
                cntSNT++;
            }
        }
    }

    public static boolean checkPrime(long n){
        for(long i = 2; i*i <= n; i++){
            if(n % i == 0){
                return false;
            }
        }
       return n >= 2;
    }
}
