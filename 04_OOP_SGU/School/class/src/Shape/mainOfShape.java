package Shape;

import java.util.Scanner;

public class mainOfShape {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double rd = sc.nextDouble();
        double side = sc.nextDouble();
        ResizableCircle obj1 = new ResizableCircle(rd);
        ResizableSquare obj2 = new ResizableSquare(side);
    }
}
