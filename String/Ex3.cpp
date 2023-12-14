//import java.util.Scanner;
//
//public class CountCharacter {
//public static void main(String[] args) {
//        Scanner sc = new Scanner(System.in);
//        String s = sc.nextLine();
//        char c = sc.next().charAt(0);
//        // Đếm và hiển thị số lần xuất hiện của ký tự c trong xâu s
//        int count = countOccurrences(s, c);
//        System.out.println(c + " - " + count);
//    }
//
//private static int countOccurrences(String s, char c) {
//        int count = 0;
//        // Duyệt qua từng ký tự trong xâu và tăng biến đếm khi gặp ký tự c
//        for (int i = 0; i < s.length(); i++) {
//            if (s.charAt(i) == c)  count++;
//        }
//        return count;
//    }
//}
