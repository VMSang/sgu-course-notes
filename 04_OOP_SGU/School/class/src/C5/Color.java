package C5;

public class color extends coordn{
    protected String Color;

    public color(){
    }
    public color(int x, int y, String Color){
        super(x,y);
        this.Color = Color;
    }
    public void xuat(){
        super.xuat();
        System.out.println(Color);
    }
}
