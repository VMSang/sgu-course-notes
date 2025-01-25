package C5;

import java.io.BufferedReader;
import java.io.FileReader;
import java.util.Scanner;

public class MainSV {
    public static void main(String[] arg){
        // lay va luu du lieu tu file
        Scanner sc = new Scanner(System.in);

        DSSV dssv = new DSSV();
        try{
            BufferedReader input = new BufferedReader(new FileReader("class/src/C5/data.txt"));
            // doc hang dau tien
            String line = input.readLine();
            int idx = 0;
            while(line != null){
                String[] arr = line.split("\\s+");
                dssv.add(idx, arr[0], arr[1], arr[2]);
                idx++;
                line = input.readLine();
            }
            input.close();
        } catch(Exception ex){
            ex.printStackTrace();
        }

        System.out.println("hay chon chuc nang");
        System.out.println("1 = xem dssv");
        System.out.println("2 = them sinh vien");
        System.out.println("3 = xoa sinh vien");
        System.out.println("4 = sua thong tin sinh vien");
        System.out.println("5 = tim kiem sinh vien");
        System.out.println("6 = thoat");

        while(true) {
            switch (sc.nextInt()) {
                case 1:
                    dssv.showAllStudent();
                    break;
                case 2:
                    dssv.add(sc.nextInt(), sc.nextLine(), sc.nextLine(), sc.nextLine());
                    break;
                case 3:
                    dssv.showAllStudent();
                    System.out.println("xoa theo stt");
                    dssv.deleteStudent(sc.nextInt());
                case 4:
                    dssv.showAllStudent();
                    dssv.editStudent(sc.nextInt(), sc.nextInt());
                case 5:
                    System.out.println("nhap ma sinh vien");
                    dssv.findStudent(sc.nextLine());
                case 6:
                    break;
            }
            break;
        }
    }
}
