package C5;

public class canBo {
    protected String id;
    protected String name;
    protected int age;
    protected String adr;

    public canBo(String id, String name, int age, String adr){
        this.id = id;
        this.name = name;
        this.age = age;
        this.adr = adr;
    }

    public String getId() {
        return id;
    }

    public String getName() {
        return name;
    }

    public int getAge() {
        return age;
    }

    public String getAdr() {
        return adr;
    }

    public void setId(String id) {
        this.id = id;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public void setAdr(String adr) {
        this.adr = adr;
    }
}
