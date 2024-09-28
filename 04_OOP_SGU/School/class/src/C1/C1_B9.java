package C1;

import java.util.Scanner;

public class C1_B9 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String s = sc.nextLine();
        System.out.printf("Do dai cua chuoi: %s\n", s.length());

        // b: delete space
        // cách này kém hiệu quả
        s = s.replaceAll("\\s+", " ").trim();
        System.out.printf("sau khi xoa khoang trang: %s", s);
        // cải tiến
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            if (!Character.isWhitespace(c)) {
                sb.append(c);
            }
        }
        String y = sb.toString();
        System.out.println(y);

        // count the num of s
        String[] ss = s.split("\\s+");
        int cnt = 0;
        for (String x : ss) {
            cnt++;
            System.out.println(x);
        }
        System.out.println(cnt);

        // d: get k and print k char on the left and on the right
        int k = sc.nextInt();
        for (int i = 0; i < k; i++) {
            System.out.printf("%s ", s.charAt(i));
        }
        for (int i = s.length() - 1; i >= k - 1; i--) {
            System.out.printf("%s ", s.charAt(i));
        }

        // e: get k, n and print n char from index k
        int k2 = sc.nextInt();
        int n2 = sc.nextInt();
        int cnt2 = 0;
        for (int i = k2 - 1; i < n2; i++) {
            System.out.println(s.charAt(i));
            cnt2++;
            if (cnt2 == n2)
                break;
        }
    }
}
