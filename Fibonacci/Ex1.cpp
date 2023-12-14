#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;  // Nhập số nguyên N từ người dùng, biểu thị số Fibonacci thứ N cần tính

    if (N <= 0 || N > 1000) {
        // Kiểm tra xem giá trị N có hợp lệ hay không, nếu không hợp lệ, in ra thông báo và kết thúc chương trình
        cout << "Invalid input!";
        return 0;
    }

    int f1 = 1, f2 = 1, result;  // Khai báo ba biến: f1, f2 để lưu trữ hai số Fibonacci gần nhất, và result để lưu trữ số Fibonacci thứ N

    if (N == 1 || N == 2) {
        result = 1;  // Trường hợp đặc biệt: N = 1 hoặc N = 2, thì kết quả là 1, vì F1 và F2 là 1
    } else {
        for (int i = 3; i <= N; i++) {
            result = f1 + f2;  // Tính số Fibonacci thứ N bằng cách cộng hai số Fibonacci gần nhất
            f1 = f2;  // Cập nhật giá trị f1 để trở thành số Fibonacci trước đó
            f2 = result;  // Cập nhật giá trị f2 để trở thành số Fibonacci gần nhất
        }
    }

    cout << "Số Fibonacci thứ " << N << " tìm được: " << result << endl;  // In ra kết quả số Fibonacci thứ N

    return 0;
}
