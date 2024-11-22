package OOP_Market;
import java.util.Scanner;

public class cho {
    public static void main(String[] args) {
        Sap[] listSap = new Sap[3];
        nhap(listSap);
        System.out.println(tinhTongSoTien(listSap));
    }

    public static void nhap(Sap[] listSap){
        Scanner sc = new Scanner(System.in);
        for(int i = 0; i < 3; i++){
            System.out.println("Chon loai sap 1,2,3");
            int ch = sc.nextInt();
            System.out.println("Nhap stt, dien tich, dich vu (neu co)");
            if(ch == 1){
                int stt = sc.nextInt();
                int dienTich = sc.nextInt();
                int dichVu = sc.nextInt();
                listSap[i] = new SapThucPham(stt, dienTich, dichVu);
            } else if (ch == 2) {
                int stt = sc.nextInt();
                int dienTich = sc.nextInt();
                int dichVu = sc.nextInt();
                listSap[i] = new SapQuanAo(stt, dienTich);
            } else {
                int stt = sc.nextInt();
                int dienTich = sc.nextInt();
                int dichVu = sc.nextInt();
                listSap[i] = new SapTrangSuc(stt, dienTich);
            }
        }
    }

    public static long tinhTongSoTien(Sap[] listSap){
        long sum = 0;
        for(int i = 0; i < 3; i++){
            sum += (listSap[i].tinhTienPhaiDong());
        }
        return sum;
    }

}
