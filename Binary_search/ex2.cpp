#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, x;
    cout << "Nhap vao so n: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Nhap vao day so a: ";
    for (int i = 0; i < n; ++i) cin >> arr[i];

    cout << "Nhap vao so x: ";
    cin >> x;

    // Sắp xếp dãy số
    sort(arr.begin(), arr.end());

    // Sử dụng binary_search để kiểm tra xem có tồn tại x trong dãy hay không
    if (binary_search(arr.begin(), arr.end(), x)) {
        // Nếu có, tìm và in ra chỉ số của x
        int index = lower_bound(arr.begin(), arr.end(), x) - arr.begin();
        cout << "Chi so cua phan tu dau tien co gia tri " << x << ": " << index << endl;
    } else cout << "Khong ton tai phan tu co gia tri " << x << " trong day" << endl;

    return 0;
}
