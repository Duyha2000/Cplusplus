#include <iostream>

using namespace std;

int main() {
    int a, b;  // Khai báo hai biến a và b để lưu giới hạn dưới và trên của đoạn
    cout << "Nhập a và b: ";  // Hiển thị thông báo để nhập giá trị a và b
    cin >> a >> b;  // Nhập giá trị a và b từ người dùng

    if (a < 1 || b < a) {
        cout
                << "Invalid input!";  // Kiểm tra xem giá trị a và b có hợp lệ hay không, nếu không, in ra thông báo và kết thúc chương trình
        return 0;
    }

    int count = 0;  // Khai báo biến count để đếm số lượng số Fibonacci trong đoạn [a, b]
    int f1 = 1, f2 = 1, f3 = f1 + f2;  // Khai báo ba biến để lưu giá trị của ba số Fibonacci liên tiếp

    while (f3 <= b) {  // Sử dụng vòng lặp while để kiểm tra các số Fibonacci trong đoạn [a, b]
        if (f3 >= a) {
            count++;  // Nếu số Fibonacci f3 nằm trong đoạn [a, b], tăng biến đếm count lên 1
        }
        f1 = f2;  // Cập nhật giá trị của ba số Fibonacci cho vòng lặp tiếp theo
        f2 = f3;
        f3 = f1 + f2;
    }

    cout << "Số lượng số Fibonacci trong đoạn [" << a << ", " << b << "] là: " << count
         << endl;  // In ra số lượng số Fibonacci trong đoạn [a, b]

    return 0;
}
