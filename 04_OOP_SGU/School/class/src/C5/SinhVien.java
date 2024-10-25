package C5;

import java.util.Scanner;

public class SinhVien {
    private String masv;
    private String ten;
    private String SDT;

    public SinhVien(){
        this.masv = "";
        this.ten = "";
        this.SDT = "";
    }

    public SinhVien(String masv, String ten, String SDT){
        this.masv = masv;
        this.ten = ten;
        this.SDT = SDT;
    }

    // ham tao sao chep
    public SinhVien(SinhVien sv){
        this.masv = sv.masv;
        this.ten = sv.ten;
        this.SDT = sv.SDT;
    }

    public String getMav(){
        return this.masv;
    }

    public String getTen(){
        return this.ten;
    }

    public String getSDT(){
        return this.SDT;
    }

    public void setMasv(String masv){
        this.masv = masv;
    }

    public void setTen(String ten) {
        this.ten = ten;
    }

    public void setSDT(String SDT) {
        this.SDT = SDT;
    }

    public void nhap(){
        Scanner sc = new Scanner(System.in);
        this.masv = sc.nextLine();
        this.ten = sc.nextLine();
        this.SDT = sc.nextLine();
    }

    public void xuat(){
        System.out.println(this.masv + " " + this.ten + " " + this.SDT);
    }
}
