package OOP_Market;

public class SapTrangSuc extends Sap{
    public SapTrangSuc(int stt, int dienTich){
        setStt(stt);
        setDienTich(dienTich);
    }
    protected int tinhThueDoanhThu(){
        if(doanhThu < 100000000) return (doanhThu*20/100);
        else return (doanhThu*30/100);
    }
}
