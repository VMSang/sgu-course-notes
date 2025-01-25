package phuongtien;

public class Main {
    public static void main(String[] args){
        vehicle pt1 = new vehicle();
        pt1 = new Truck();

        vehicle pt2 = new vehicle();
        pt2 = new Pasenger_vehicle();

        vehicle pt3 = new vehicle();
        pt3 = new motobike();

        pt1.input();
        pt2.input();
        pt3.input();
        System.out.println("--------------------------------");
        pt1.print();
        pt2.print();
        pt3.print();

    }
}
