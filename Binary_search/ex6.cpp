#include <iostream>

using namespace std;
using ll = long long;

int main() {
//    Biến count ở đây đại diện cho số lượng đồng xu mà bạn muốn sử dụng để xây dựng bậc thang.
    int count;
    cin >> count;
//   Biến left và right được sử dụng để giới hạn phạm vi tìm kiếm trong quá trình tìm kiếm nhị phân.
    ll left = 0, right = count;

    while (left <= right) {
//   Biến mid là giá trị trung bình của left và right, đại diện cho số hàng giả sử.
        ll mid = (left + right) / 2;
//   Tính tổng của dãy từ 1 đến mid:
        ll sum = mid * (mid + 1) / 2;
        if (sum == count) cout << mid << endl;
        else if (sum < count) left = mid + 1;
        else right = mid - 1;
    }
    cout << right << endl;

    return 0;
}
