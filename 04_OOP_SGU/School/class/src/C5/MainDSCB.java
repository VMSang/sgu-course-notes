package C5;

import java.io.FileReader;
import java.io.BufferedReader;

public class MainDSCB {
    public static void main(String[] args) {
        DSCB dscb = new DSCB();
        // read data from file
        try{
            BufferedReader input = new BufferedReader(new FileReader("class/src/C5/dataCanBo.txt"));
            String line = input.readLine();
            while(line != null){
                String[] word = line.split(",");
                dscb.crt(word[0], word[1], Integer.parseInt(word[2]), word[3], word[4], word[5]);
                line = input.readLine();
            }
        } catch(Exception ex){
            ex.printStackTrace();
        }
        System.out.println("da doc file xong");

        // demo function
        dscb.crt("9999", "Van A", 30, "binh duong","5", "cong nhan");
//        dscb.edit("5768");
//        dscb.del("9999");
//        dscb.fd("Van A");
        dscb.showAll();
        dscb.WriteAllCanBo();
    }
}
