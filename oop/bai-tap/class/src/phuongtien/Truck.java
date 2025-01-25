package phuongtien;

import java.util.Scanner;

public class Truck extends vehicle {
    private int max_load;
//    super()
    public Truck(){}

    public void input(){
        Scanner sc = new Scanner(System.in);
        System.out.println("nhap reg_num: ");
        reg_num = sc.nextLine();
        System.out.println("nhap brand: ");
        brand = sc.nextLine();
        System.out.println("nhap max_load = ");
        max_load = sc.nextInt();
    }

    public void print(){
        System.out.println("reg_num = " + reg_num);
        System.out.println("brand: " + brand);
        System.out.println("max_load = " + max_load);
    }
}
