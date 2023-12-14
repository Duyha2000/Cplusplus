//import java.util.Scanner;
//
//public class FindCharacterPosition {
//public static void main(String[] args) {
//        Scanner sc = new Scanner(System.in);
//
//        String s = sc.nextLine();
//        char c = sc.next().charAt(0);
//
//        // Tìm và hiển thị vị trí đầu tiên của ký tự c trong xâu s
//        int position = findFirstOccurrence(s, c);
//        System.out.println("Vị trí đầu tiên của ký tự " + c + " trong xâu là: " + position);
//    }
//
//private static int findFirstOccurrence(String s, char c) {
//        // Duyệt qua từng ký tự trong xâu và trả về vị trí đầu tiên nếu gặp ký tự c
//        for (int i = 0; i < s.length(); i++) {
//            if (s.charAt(i) == c) {
//                return i + 1; // Vị trí đầu tiên là 1, không phải 0
//            }
//        }
//
//        // Trả về -1 nếu ký tự c không xuất hiện trong xâu s
//        return -1;
//    }
//}
