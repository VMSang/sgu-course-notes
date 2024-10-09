package C5;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        color diem1 = new color(sc.nextInt(), sc.nextInt(), sc.nextInt());
        color diem2 = new color(sc.nextInt(), sc.nextInt(), sc.nextInt());

        doanThang dt1 = new doanThang(diem1, diem2);

        dt1.distance();
        dt1.diffColor();
    }
}
