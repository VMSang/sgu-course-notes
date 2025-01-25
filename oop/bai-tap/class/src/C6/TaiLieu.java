package C6;

public class TaiLieu implements INhapXuat{
    protected String ten;

    public TaiLieu(String ten) {
        this.ten = ten;
    }
    public String getTen(){
        return this.ten;
    }
    public void nhap(){
        System.out.print("Nhap ten tai lieu: ");
    }
    public void xuat(){
        System.out.println("test");
    }
}
