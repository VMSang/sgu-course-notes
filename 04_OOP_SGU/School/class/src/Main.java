import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
       Scanner sc = new Scanner(System.in);
       int n = sc.nextInt();
       String [] a  = new String[n];
       String s = sc.nextLine();
       int x = -1;
       for(int i = 0; i<n; i++){
           a[i] = sc.nextLine();
           if(a[i].contains(s)){
               x = i;
           }
       }
       System.out.println(x);
    }
}

