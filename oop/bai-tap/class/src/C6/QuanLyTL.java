package C6;

import java.util.Scanner;

public class QuanLyTL {
    private DSTaiLieu dstl = new DSTaiLieu();

    public void menu() {
        System.out.println("1. them tai lieu");
        System.out.println("2. sua tai lieu");
        System.out.println("3. xoa tai lieu");
        System.out.println("4. tiem kiem tai lieu");
        System.out.println("5. xuat danh sach tai lieu");
        System.out.println("6. thoat");

        Scanner sc = new Scanner(System.in);

        int choice = sc.nextInt();
        boolean status = true;
        while (status) {
            switch (choice) {
                case 1:
                    System.out.println("hay nhap ten tai lieu can them");
                    dstl.them(sc.nextLine());
                case 2:
                    System.out.println("hay nhap ten tai lieu muon tim");
                    dstl.fd(sc.nextLine());
                case 3:
                    dstl.xuatDS();
                default:
                    status = false;
            }
        }
    }
}
