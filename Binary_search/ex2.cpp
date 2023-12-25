#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Hàm tìm kiếm nhị phân và trả về chỉ số của phần tử đầu tiên có giá trị bằng x
int binary_search(vector<int> arr, int x) {
    int left = 0, right = arr.size() - 1;
    int index = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        // Tiếp tục tìm ở nửa trái để tìm phần tử đầu tiên
        if (arr[mid] == x) {
            index = mid;
            right = mid - 1;
            // Tìm ở nửa phải
        } else if (arr[mid] < x) left = mid + 1;
            // Tìm ở nửa trái
        else right = mid - 1;
    }
    return index;
}

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) cin >> arr[i];
    // Sắp xếp dãy số
    sort(arr.begin(), arr.end());
    // Sử dụng binary_search để kiểm tra xem có tồn tại x trong dãy hay không
    int index = binary_search(arr, x);

    if (index != -1) cout << "Chi so cua phan tu dau tien co gia tri " << x << ": " << index << endl;
    else cout << index << endl;

    return 0;
}
