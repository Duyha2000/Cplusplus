import java.util.Scanner;

public class CheckReverseStrings {
public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Nhập chuỗi thứ nhất
        System.out.println("Nhập chuỗi thứ nhất:");
        String str1 = sc.nextLine();

        // Nhập chuỗi thứ hai
        System.out.println("Nhập chuỗi thứ hai:");
        String str2 = sc.nextLine();

        // Kiểm tra và hiển thị kết quả
        if (areStringsReversed(str1, str2))  System.out.println("OK");
        else  System.out.println("KO");
    }

private static boolean areStringsReversed(String str1, String str2) {
        // Kiểm tra độ dài của hai chuỗi
        if (str1.length() != str2.length())    return false;

        // So sánh ký tự từ đầu và cuối của hai chuỗi
        for (int i = 0; i < str1.length(); i++) {
            if (str1.charAt(i) != str2.charAt(str2.length() - 1 - i)) return false;
        }

        // Nếu qua tất cả các kiểm tra mà không có khác biệt, hai chuỗi là đảo ngược của nhau
        return true;
    }
}
