package C4;

public class doanThang {
    private final color diem1;
    private final color diem2;

    public doanThang(color diem1, color diem2){
        this.diem1 = diem1;
        this.diem2 = diem2;
    }

    public void distance(){
        System.out.println(Math.sqrt(Math.pow(diem1.x - diem2.x, 2) + Math.pow(diem1.y - diem2.y, 2)));
    }
    public void diffColor(){
        System.out.println((diem1.color != diem2.color) ? "Khac mau" : "Cung mau");
    }

}