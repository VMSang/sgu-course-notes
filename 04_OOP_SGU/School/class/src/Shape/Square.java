package Shape;

public class Square extends Shape{
    protected double side = 1.0;

    public Square(double side){
        this.side = side;
    }

    @Override
    public double getPerimeter() {
        return side * 4;
    }

    @Override
    public double getArea() {
        return side*side;
    }
}
