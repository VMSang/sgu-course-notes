package C6;

public class DSTaiLieu {
    private TaiLieu[] dstl = new TaiLieu[10];
    private static int cntTaiLieu = 0;

    public void them(String ten){
        dstl[cntTaiLieu] = new TaiLieu(ten);
        cntTaiLieu++;
    }

    public void fd(String ten){
        for(TaiLieu tmp : dstl){
            if(ten.equals(tmp.getTen())){
                System.out.println("Co tai lieu nay trong danh sach");
                return;
            }
        }
        System.out.println("khong co tai lieu nay trong danh sach");
    }

    public void xuatDS() {
        for(TaiLieu tmp : dstl){
            System.out.println(tmp.getTen());
        }
    }
}
