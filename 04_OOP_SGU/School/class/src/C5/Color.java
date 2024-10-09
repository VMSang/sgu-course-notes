package C5;

public class color extends coordn{
    protected int color;

    public color(int x, int y, int Color){
        super(x,y);
        this.color = Color;
    }

    public void xuat(){
        super.xuat();
        System.out.println("day la mau: " + color);
    }
}
