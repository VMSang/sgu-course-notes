package OOP_Market;

public class SapThucPham extends Sap {
    private int tienDichVu;

    public SapThucPham(int stt, int dienTich, int tienDichVu){
        setStt(stt);
        setDienTich(dienTich);
        this.tienDichVu = tienDichVu;
    }
    protected int tinhThueDoanhThu(){
        return (doanhThu * 5/100);
    }

    protected int tinhTienDichVu(){
        return tienDichVu;
    }

    public int getTienDichVu(){
        return tienDichVu;
    }
}
