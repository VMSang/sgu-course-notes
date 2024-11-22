package Shape;

public class ResizableCircle extends Circle implements Resizable{
    public ResizableCircle(double radius){
        super(radius);
    }

    @Override
    public void resize(int percent) {
        System.out.println((getPerimeter() * (double) percent / 100));
    }
}
