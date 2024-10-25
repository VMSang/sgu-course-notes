package C5;

import java.io.BufferedReader;
import java.io.FileReader;
import java.util.Scanner;

public class MainSV {
    public static void main(String[] arg){
        // lay va luu du lieu tu file
        Scanner sc = new Scanner(System.in);
        DSSV dssv = new DSSV();
        int n = 0;
        try{
            BufferedReader input = new BufferedReader(new FileReader("data.txt"));
            // doc hang dau tien
            String line = input.readLine();
            while(line != null){
                String[] arr = line.split("\\s+");
                dssv.add(arr[0], arr[1], arr[2]);
                line = input.readLine();
            }
            if (n != 0) {
                n++;
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


        switch (sc.nextInt()){
            case 1:

                break;
            case 2:

        }
    }
}
