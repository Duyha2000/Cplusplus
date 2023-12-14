#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

int main() {
    // B1.1: Đọc số lượng máy móc và số sản phẩm cần tìm
    int n, k;
    cin >> n >> k;  // 3 - 9

    // B1.2: Khởi tạo vector chứa thời gian sản xuất của từng máy móc
    vector<int> machineTimes(n);
    for (int i = 0; i < n; i++) cin >> machineTimes[i]; // 3 2 7

    // B2: Khởi tạo biến left và right cho Binary Search
    ll left = 0, right = 1e18;

    // B3: Binary Search
    while (left <= right) {
        // B3.1: Tính giữa của left và right
        ll mid = (right + left) / 2;

        // B3.2: Tính tổng số sản phẩm có thể sản xuất trong thời gian mid
        ll totalProducts = 0;
        for (int i = 0; i < n; i++) totalProducts += mid / machineTimes[i];

        // B3.3: Nếu tổng sản phẩm >= số sản phẩm cần tìm, thu hẹp khoảng giữa bằng cách di chuyển right
        if (totalProducts >= k) right = mid - 1;
            // Ngược lại, nếu tổng sản phẩm < số sản phẩm cần tìm, thu hẹp khoảng giữa bằng cách di chuyển left
        else left = mid + 1;
    }

    // B4: In ra thời gian nhỏ nhất để sản xuất đủ số sản phẩm cần tìm
    cout << left << endl;
    // Nhỏ nhất : left
    // Lớn nhất: right
    return 0;
}
