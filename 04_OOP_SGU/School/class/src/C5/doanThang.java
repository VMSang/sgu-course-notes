package C5;

public class doanThang extends color {
    private color diem1;
    private color diem2;

    public doanThang(int x, int y, String color, int x2, int y2, String color2){
        diem1.x = x;
        diem1.y = y;
        diem2.x = x2;
        diem2.y = y2;

        diem1.Color = color;
        diem2.Color = color2;
    }

    public void khoangCach(){
        System.out.println(Math.sqrt(Math.pow(diem1.x - diem2.x, 2) + Math.pow(diem1.y - diem2.y, 2)));
    }
    public void Mau(){
        System.out.println((diem1.Color != diem2.Color) ? "Khac mau" : "Cung mau");
    }

}
