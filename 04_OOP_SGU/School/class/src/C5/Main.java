package C5;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int y = sc.nextInt();
        int x2 = sc.nextInt();
        int y2 = sc.nextInt();
        sc.nextLine();
        String color = sc.nextLine();
        String color2 = sc.nextLine();

        doanThang doanThang1 = new doanThang(x, y, color, x2, y2, color2);
        doanThang1.khoangCach();
        doanThang1.Mau();
    }
}
