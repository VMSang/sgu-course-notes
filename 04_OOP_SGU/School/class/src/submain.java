public class submain extends Main {
        private String lop;
        private double gpa;

        public submain(String lop, double gpa, String name, String birth) {
            super(name, birth);  // Gọi constructor của lớp cha (Person)
            this.lop = lop;
            this.gpa = gpa;
        }

        public String getLop() {
            return this.lop;  // Trả về lớp
        }

        public double getGpa() {
            return this.gpa;  // Trả về GPA
        }
}
