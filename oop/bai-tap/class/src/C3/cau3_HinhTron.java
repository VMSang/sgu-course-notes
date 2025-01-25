package C3;

import java.util.Scanner;

public class cau3_HinhTron {
    private final double pi = 3.14;
    private double r;
    private double dienTich;
    private double chuVi;

    public cau3_HinhTron() {
    }

    private void nhap(double r){
        this.r = r;
    }

    public void calDienTich(){
        this.dienTich = pi * this.r * this.r;
    }

    public void calChuVi(){
        this.chuVi = 2 * pi * this.r;
    }


    private void xuat(){
        System.out.println("dien tich: " + dienTich);
        System.out.println("chu vi: " + chuVi);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        cau3_HinhTron hinh1 = new cau3_HinhTron();
        hinh1.nhap(sc.nextDouble());
        hinh1.calChuVi();
        hinh1.calDienTich();
        hinh1.xuat();
    }
}
