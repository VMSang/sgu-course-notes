package C3;

import java.util.Scanner;

public class gio_phut_giay {
    private int gio;
    private int phut;
    private int giay;

    public gio_phut_giay(){

    }

    public gio_phut_giay(int gio, int phut, int giay){
        this.gio = gio;
        this.phut = phut;
        this.giay = giay;
    }

    public void nhap(int gio, int phut, int giay){
        this.gio = gio;
        this.phut = phut;
        this.giay = giay;
    }

    public void xuat() {
        System.out.println("gio_phut_giay{" +
                "gio=" + gio +
                ", phut=" + phut +
                ", giay=" + giay +
                '}');
    }
}
