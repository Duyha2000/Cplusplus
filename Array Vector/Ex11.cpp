#include <iostream>

using namespace std;

int main() {
    int size;
    // Nhập kích thước của mảng
    cin >> size;
    int arr[size];
    // Khai báo mảng có kích thước tương ứng với giá trị "size"
    for (int i = 0; i < size; i++) cin >> arr[i];
    // Khởi tạo biến isMonotonic với giá trị true, giả định ban đầu rằng mảng đơn điệu
    bool isMonotonic = true;
    // 1 - 3 ; 2 - 0
    if (size > 2) {
        for (int i = 2; i < size; i++) {
            // Kiểm tra tính đơn điệu của mảng
            // Nếu tích phân của sự thay đổi giữa các phần tử không dương hoặc không âm, mảng không đơn điệu
            if ((arr[i] - arr[i - 1]) * (arr[i - 1] - arr[i - 2]) <= 0) isMonotonic = false;
        }
    }
    // Kiểm tra kết quả và xuất kết quả
    if (isMonotonic) cout << "YES";
    else cout << "NO";
    return 0;
}
// Input: 2 4 6 7 9 -> (2-4) * (4-6) > 0
// Output: Yes

// Input: 2 6 4 2 4 -> (2-6) * (6-4) < 0
// Output: No