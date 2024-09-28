package C1;

import java.util.ArrayList;
import java.util.Scanner;

public class C1_B8 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];

        for(int i = 0; i<n; i++){
            arr[i] = sc.nextInt();
        }
        //--------------------a-------------------------
        long sum = 0;
        for(int i = 0; i<n; i++){
            System.out.printf("%d ", arr[i]);
            sum+=arr[i];
        }
        System.out.println();
        System.out.println(sum);
        //--------------------b-------------------------
        sum = 0;
        for(int i = 0; i<n; i++){
            if(arr[i] % 2 == 0){
                System.out.printf("%d ", arr[i]);
                sum+=arr[i];
            }
        }
        System.out.println();
        System.out.println(sum);
        //---------------------c------------------------
        sum = 0;
        for(int i = 0; i<n; i++){
            if(arr[i] % 2 != 0){
                System.out.printf("%d ", arr[i]);
                sum+=arr[i];
            }
        }
        System.out.println();
        System.out.println(sum);
        //----------------------d-----------------------
        sum = 0;
        for(int i = 0; i<n; i++){
            if(prime(arr[i])){
                System.out.printf("%d ", arr[i]);
                sum+=arr[i];
            }
        }
        System.out.println();
        System.out.println(sum);
        //----------------------e-----------------------
        // gan vao mang khac
        int[] arr2 = new int[n+1];
        System.arraycopy(arr, 0, arr2, 0, n);
        arr2[n-1] = sc.nextInt();
        // dung arrayList
        ArrayList<Integer> arrL = new ArrayList<>();
        for(int i = 0; i < n; i++){
            arrL.add(arr[i]);
        }
        //----------------------f-----------------------
        int[] arr3 = new int[n-1];
        int k = sc.nextInt();

        for(int i = 0, j = 0; i<n; i++, j++){
            if(i == k-1){
                i++;
            }
            arr3[i] = arr[i];
        }
        //----------------------f-----------------------
        int x = sc.nextInt();
        for(int i = 0; i<n; i++){
            if(arr[i] == x){
                System.out.println(i);
            }
        }
    }

    public static boolean prime(int n){
        for(int i = 2; i*i <= n; i++){
            if(n % i == 0){
                return false;
            }
        }
        return n > 1;
    }
}