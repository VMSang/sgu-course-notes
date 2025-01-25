package C3;

import java.util.Scanner;

public class cau1_Diem {
    private int x;
    private int y;

    public cau1_Diem() {
    }

    public void nhap(int x, int y){
        this.x = x;
        this.y = y;
    }

    public void xuat(){
        System.out.println("diem cua ban la: "+x+" " +y);
    }

    public void diChuyen(int x1, int y1){
        this.x = this.x + x1;
        this.y = this.y + y1;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        cau1_Diem sv1 = new cau1_Diem();
        sv1.nhap(sc.nextInt(), sc.nextInt());
        sv1.xuat();
        cau1_Diem sv2 = new cau1_Diem();
        sv2.diChuyen(sc.nextInt(), sc.nextInt());
    }
}
