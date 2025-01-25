package Shape;

public class ResizableSquare extends Square implements Resizable {
    public ResizableSquare(double side) {
        super(side);
    }

    @Override
    public void resize(int percent){
        System.out.println((getPerimeter() * (double) percent / 100));
    }
}
