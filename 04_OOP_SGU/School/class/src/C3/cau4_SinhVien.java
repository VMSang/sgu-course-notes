package C3;

import java.util.Scanner;

public class cau4_SinhVien {
    private long mssv;
    private String ten;
    private String lop;
    private int diem1;
    private int diem2;
    private int diem3;

    public cau4_SinhVien() {
    }

    public void nhap(long mssv, String ten, String lop, int diem1, int diem2, int diem3) {
        this.mssv = mssv;
        this.ten = ten;
        this.lop = lop;
        this.diem1 = diem1;
        this.diem2 = diem2;
        this.diem3 = diem3;
    }

    public void xuat() {
        System.out.println( "cau4_SinhVien{" +
                "mssv=" + mssv +
                ", ten='" + ten + '\'' +
                ", lop='" + lop + '\'' +
                ", diem1=" + diem1 +
                ", diem2=" + diem2 +
                ", diem3=" + diem3 +
                '}');
    }

    public double diemTB(){
        return (this.diem1 + this.diem2 + this.diem3) / 3.0;
    }

    public void loai(double diemTB){
        if(diemTB >= 8)
            System.out.println("Gioi");
        else if(diemTB >= 6.5)
            System.out.println("Kha");
        else if(diemTB >= 5)
            System.out.println("Trung binh");
        else
            System.out.println("Yeu");
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        cau4_SinhVien sv1 = new cau4_SinhVien();
        long mssv = sc.nextLong();
        String ten = sc.nextLine();
        String lop = sc.nextLine();
        int diem1 = sc.nextInt();
        int diem2 = sc.nextInt();
        int diem3 = sc.nextInt();

        sv1.nhap(mssv, ten, lop, diem1, diem2, diem3);
        System.out.println(sv1.diemTB());
        sv1.loai(sv1.diemTB());

        sv1.xuat();
    }
}
