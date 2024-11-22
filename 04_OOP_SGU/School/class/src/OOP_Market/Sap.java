package OOP_Market;

public abstract class Sap {
    private static final int DONGIA = 40000000;
    private int stt;
    private int dienTich;
    protected int doanhThu;

    protected abstract int tinhThueDoanhThu();

    protected int tinhTienDichVu(){
        return 0;
    }

    private int tinhTienThueSap(){
        return (DONGIA * dienTich);
    }

    public int tinhTienPhaiDong(){
        return tinhTienThueSap() + tinhThueDoanhThu();
    }

    public void setStt(int stt){
        this.stt = stt;
    }
    public void setDienTich(int dienTich){
        this.dienTich = dienTich;
    }
}
