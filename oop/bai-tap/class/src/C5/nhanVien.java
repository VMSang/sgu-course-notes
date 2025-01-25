package C5;

public class nhanVien extends canBo {
    protected String congViec;

    public nhanVien(String id, String name, int age, String adr, String congViec) {
        super(id, name, age, adr);
        this.congViec = congViec;
    }
}
