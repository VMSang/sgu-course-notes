package Shape;

public class Circle extends Shape {
    protected double radius = 1.0;

    public Circle(double radius){
        this.radius = radius;
    }

    @Override
    public double getPerimeter() {
        return (2 * 3.14 * radius);
    }

    @Override
    public double getArea() {
        return (radius * 3.14);
    }
}
