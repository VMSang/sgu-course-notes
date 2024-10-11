package C3;

import java.util.Scanner;

public class phanSo {
    private int tu;
    private int mau;

    public int getTu(){
        return tu;
    }
    public int getMau(){
        return mau;
    }
    public void setTu(int tu){
        this.tu = tu;
    }
    public void setMau(int mau){
        this.mau = mau;
    }
    public phanSo(int tu, int mau){
        this.tu = tu;
        this.mau = mau;
    }
    public void xuat(){
        System.out.println(this.tu+"/"+this.mau);
    }
    public void nghichDao(){
        int tmp = this.tu;
        this.tu = mau;
        this.mau = tmp;
    }
    public phanSo Tong(phanSo p){
        int newTu = this.tu * p.mau + p.tu * this.mau;
        int newMau = this.mau * p.mau;
        phanSo tmp = new phanSo(newTu, newMau);
        return tmp;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        phanSo p1 = new phanSo(6,9);
        p1.xuat();

        phanSo p2 = new phanSo(9,16);
        System.out.println(p1.Tong(p2));
    }
}
