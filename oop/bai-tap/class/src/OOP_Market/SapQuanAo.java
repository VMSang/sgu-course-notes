package OOP_Market;

public class SapQuanAo extends Sap{
    public SapQuanAo(int stt, int dienTich){
        setStt(stt);
        setDienTich(dienTich);
    }
    protected int tinhThueDoanhThu(){
        return (doanhThu * 10 / 100);
    }
}
