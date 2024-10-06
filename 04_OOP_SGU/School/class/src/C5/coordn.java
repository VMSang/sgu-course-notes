package C5;

public class coordn {
    protected int x;
    protected int y;

    public coordn(){
        x = 0;
        y = 0;
    }
    public coordn(int x, int y){
        this.x = x;
        this.y = y;
    }
    public void xuat(){
        System.out.println("x = " + x);
        System.out.println("y = " + y);
    }
}
