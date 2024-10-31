package C5;

import java.util.ArrayList;
import java.util.Scanner;

public class DSCB {
    public ArrayList<canBo> dscb = new ArrayList<>();
    protected static int cnt = 0;
    Scanner sc = new Scanner(System.in);

    public void crt(String id, String name, int age, String adr, String data, String type){
        cnt++;
        if(type == "cong nhan"){
            dscb.add(new congNhan(id, name, age, adr, Integer.parseInt(data)));
        } else if(type == "ky su"){
            dscb.add(new kySu(id, name, age, adr, data));
        } else {
            dscb.add(new nhanVien(id, name, age, adr, data));
        }
    }

    public void edit(String id){
        System.out.println("Hay nhap thong tin can chinh sua cho " + id + ": ");
        for(canBo tmp : dscb){
            System.out.println(tmp.id); //debug
            if(tmp.id.equals(id)){
                System.out.println("da tim thay " + tmp.id);
                System.out.print("Id: ");
                tmp.setId( sc.nextLine());
                System.out.print("name: ");
                tmp.setName(sc.nextLine());
                System.out.print("age: ");
                tmp.setAge(sc.nextInt());
                sc.nextLine();
                System.out.print("adr: ");
                tmp.setAdr(sc.nextLine());
                System.out.println("---------------------------------");
                break;
            }
        }
        System.out.println("Khong co nguoi nay");
        System.out.println("---------------------------------");
    }

    public void del(String id){
        int idx = 0;
        for(canBo tmp : dscb){
            if(tmp.id.equals(id)) {
                dscb.remove(idx);
                break;
            }
            idx++;
        }
        System.out.println("da xoa " + id + " thanh cong");
        System.out.println("---------------------------------");
    }
    public void fd(String name){
        for(canBo tmp : dscb){
            if(tmp.name.equals(name)){
                System.out.println("da tim thanh cong:");
                System.out.println(name +  " tuong ung voi "+ tmp.name + " " + tmp.age);
                break;
            }
        }
        System.out.println("Khong co nguoi nay");
        System.out.println("---------------------------------");
    }

    public void showAll(){
        System.out.println("Danh sach can bo");
        for(canBo tmp : dscb){
            System.out.println(tmp.id + " " + tmp.name + " " + tmp.age + " " + tmp.adr);
        }
        System.out.println("---------------------------------");
    }
}
