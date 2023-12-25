#include <iostream>

using namespace std;
using ll = long long;

int main() {
    // Khai báo biến
    ll count, mid, sum;

    // Nhập tổng số đồng xu
    cin >> count;

    // Khởi tạo con trỏ left và right cho thuật toán tìm kiếm nhị phân
    ll left = 0, right = count; // 6

    // Vòng lặp tìm kiếm nhị phân
    while (left <= right) {

        // Tính điểm giữa
        mid = (left + right) / 2;

        // Tính tổng số đồng xu đến dòng hiện tại bằng công thức (n * (n + 1)) / 2
        sum = mid * (mid + 1) / 2;

        // Kiểm tra xem tổng có khớp với tổng đầu vào không, nếu bằng, in ra dòng hiện tại (mid) và thoát
        if (sum == count) cout << mid << endl;
            // Nếu tổng nhỏ hơn đầu vào, cập nhật con trỏ left
        else if (sum < count) left = mid + 1;
            // Nếu tổng lớn hơn đầu vào, cập nhật con trỏ right
        else right = mid - 1;
    }

    // Xuất kết quả (dòng cuối cùng hợp lệ trước khi tổng vượt quá đầu vào)
    cout << right << endl;

    return 0;
}
