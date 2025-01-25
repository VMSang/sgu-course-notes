package C4;

import java.util.Scanner;

public class ThueBaoDT {
    private String sdt;
    private String ten;
    private int time;

    public int getTime() {
        return time;
    }

    public void setTime(int time) {
        this.time = time;
    }

    public ThueBaoDT(){

    }

    public ThueBaoDT(String sdt, String ten) {
        this.sdt = sdt;
        this.ten = ten;
        this.time = 0;
    }

    public ThueBaoDT(String sdt, String ten, int time) {
        this.sdt = sdt;
        this.ten = ten;
        this.time = time;
    }

    public void nhap(){
        Scanner sc = new Scanner(System.in);
        this.sdt = sc.nextLine();
        this.ten = sc.nextLine();
        this.time = sc.nextInt();
    }

    public void xuat(){
        System.out.println(this.sdt + " " + this.ten + " " + this.time);
    }

    public int tinhcuoc(){
        return 20000 + 200*this.time;
    }

    public static void main(String[] args) {
        ThueBaoDT obj = new ThueBaoDT();
        obj.nhap();
        obj.xuat();
        obj.tinhcuoc();
    }

}
