import java.util.Scanner;

public class Main {
    private String name, birth;

    public Main(String name, String birth) {
        this.name = name;
        this.birth = birth;
    }

    public String getName() {
        return this.name;  // Trả về tên sinh viên
    }

    public static void main(String[] args) {
        submain s = new submain("CNTT1", 3.2, "Nguyen Van A", "22/12/2002");
        System.out.println(s.getName());
    }
}

