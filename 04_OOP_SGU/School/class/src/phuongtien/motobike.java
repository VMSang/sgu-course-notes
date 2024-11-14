package phuongtien;

import java.util.Scanner;

public class motobike extends vehicle {
    private int type;

    public motobike(){}

    public void input(){
        Scanner sc = new Scanner(System.in);
        System.out.println("nhap reg_num: ");
        reg_num = sc.nextLine();
        System.out.println("nhap brand: ");
        brand = sc.nextLine();
        System.out.println("nhap type = ");
        type = sc.nextInt();
    }

    public void print(){
        System.out.println("reg_num = " + reg_num);
        System.out.println("brand: " + brand);
        System.out.println("type: " + type);
    }
}
