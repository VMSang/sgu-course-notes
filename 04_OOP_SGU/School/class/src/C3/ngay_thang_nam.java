package C3;

public class ngay_thang_nam {
    private int ngay;
    private int thang;
    private int nam;

    public ngay_thang_nam(){

    }

    public ngay_thang_nam(int ngay, int thang, int nam){
        this.ngay = ngay;
        this.thang = thang;
        this.nam = nam;
    }

    public void nhap(int ngay, int thang, int nam){
        this.ngay = ngay;
        this.thang = thang;
        this.nam = nam;
    }

    public void xuat() {
        System.out.println("ngay_thang_nam{" +
                "ngay=" + ngay +
                ", thang=" + thang +
                ", nam=" + nam +
                '}');
    }
}
