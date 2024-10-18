package C5;

import java.util.Scanner;

public class hinhTron extends hinhHoc{
    private final double pi = 3.14;
    private double r;
    private double dienTich;
    private double chuVi;

    public void tinhDienTich(){
        this.dienTich = pi*r*r;
    }

    public void tinhChuVi(){
        this.chuVi = 2*pi*r;
    }

    public void Nhap(){
        Scanner sc = new Scanner(System.in);
        System.out.print("nhap ban kinh: ");
        this.r = sc.nextDouble();
    }

    public void Xuat(){
        System.out.printf("dien tich = %.2f chu vi = %.2f", this.dienTich, this.chuVi);
    }
}