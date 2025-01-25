package C5;

public class congNhan extends canBo {
    protected int bac;

    public congNhan(String id, String name, int age, String adr, int bac){
        super(id, name, age, adr);
        this.bac = bac;
    }
}
