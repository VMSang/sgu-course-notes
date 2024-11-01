package C6;

public class TaiLieu implements INhapXuat{
    private String ten;

    public TaiLieu(String ten) {
        this.ten = ten;
    }

    public void nhap(){
        System.out.print("Nhap ten tai lieu: ");
    }
    public void xuat(){
        System.out.println("test");
    }
}
