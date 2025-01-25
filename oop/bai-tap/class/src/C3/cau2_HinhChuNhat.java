package C3;

import java.util.Scanner;

public class cau2_HinhChuNhat {
    private double dai;
    private double rong;
    private double dienTich = -1;
    private double chuVi = 0;

    public cau2_HinhChuNhat() {
    }

    public void nhap(double dai, double rong){
        this.dai = dai;
        this.rong = rong;
    }

    public void calDienTich(){
        this.dienTich = dai * rong;
    }

    public void calChuVI(){
        this.chuVi= (dai + rong) * 2;
    }

    public void xuat(){
        System.out.println("chieu dai: " + this.dai);
        System.out.println("chieu dai: " + this.rong);
        System.out.println("chieu dai: " + this.dienTich);
        System.out.println("chieu dai: " + this.chuVi);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        cau2_HinhChuNhat hinh1 = new cau2_HinhChuNhat();
        hinh1.nhap(sc.nextDouble(), sc.nextDouble());
        hinh1.calChuVI();
        hinh1.calDienTich();
        hinh1.xuat();
    }
}
