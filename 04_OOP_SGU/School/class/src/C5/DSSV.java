package C5;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;

public class DSSV {
    private ArrayList<SinhVien> dssv = new ArrayList<>();

    public DSSV() {
    }

    public void add(int idx, String masv, String ten, String SDT) {
        dssv.add(new SinhVien(masv, ten, SDT));
    }

    public void showAllStudent() {
       for(SinhVien x : dssv){
           System.out.println(x);
       }
    }

    public void deleteStudent(int idx) {
        dssv.remove(idx);
    }

    public void editStudent(int idx, int option) {
        Scanner sc = new Scanner(System.in);
        if (option == 1) {
            dssv.get(idx).setMasv(sc.nextLine());
        } else if (option == 2) {
            dssv.get(idx).setTen(sc.nextLine());
        } else {
            dssv.get(idx).setSDT(sc.nextLine());
        }
    }

    public void findStudent(String masv) {
        for (int i = 0; i < dssv.size(); i++) {
            if (masv == dssv.get(i).getMasv()) ;
            break;
        }
    }
}
