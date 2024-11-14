package phuongtien;

import java.util.Scanner;

public class Pasenger_vehicle extends vehicle{
    private int max_pass;
    private int number;

    public Pasenger_vehicle(){}

    public void input(){
        Scanner sc = new Scanner(System.in);
        System.out.println("nhap reg_num: ");
        reg_num = sc.nextLine();
        System.out.println("nhap brand: ");
        brand = sc.nextLine();
        System.out.println("nhap max_pass = ");
        max_pass = sc.nextInt();
        System.out.println("number = ");
        number = sc.nextInt();
    }

    public void print(){
        System.out.println("reg_num = " + reg_num);
        System.out.println("brand: " + brand);
        System.out.println("max_pass = " + max_pass);
        System.out.println("number = " + number);
    }
}
