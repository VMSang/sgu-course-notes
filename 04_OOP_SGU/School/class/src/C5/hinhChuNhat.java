package C5;

import java.util.Scanner;

public class hinhChuNhat extends hinhHoc{
    private int dai;
    private int rong;
    private int dienTich;
    private int chuVi;


    public void tinhDienTich(){
        System.out.println("checckkk");
        this.dienTich = dai * rong;
    }

    public void tinhChuVi(){
        this.chuVi = (dai + rong) * 2;
    }

    public void Nhap(){
        Scanner sc = new Scanner(System.in);
        System.out.print("nhap dai & rong: ");
        this.dai = sc.nextInt();
        this.rong = sc.nextInt();

    }

    public void Xuat(){
        System.out.println("dien tich = " + this.dienTich + "chu vi" + this.chuVi);
    }
}
