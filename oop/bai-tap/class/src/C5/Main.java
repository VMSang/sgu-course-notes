package C5;

public class Main {
    public static void main(String[] args) {
        hinhHoc[] hh = new hinhHoc[5];

        hh[0] = new hinhTron();
        hh[0].Nhap();
        hh[1] = new hinhChuNhat();
        hh[1].Nhap();

        for(hinhHoc hhtmp : hh){
            hhtmp.tinhDienTich();
            hhtmp.tinhChuVi();
            hhtmp.Xuat();
        }
    }
}
