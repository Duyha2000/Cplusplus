#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> arr1(n), arr2(m), arr3;
    for (int i = 0; i < n; i++) cin >> arr1[i];

    for (int i = 0; i < m; i++) cin >> arr2[i];

    for (int i = 0; i < n; i++) arr3.insert(arr3.begin() + i, arr1[i]);

    for (int i = 0; i < m; i++) arr3.insert(arr3.begin() + (n + i), arr2[i]);

    // Bây giờ, arr3 chứa toàn bộ nội dung của cả hai arr1 và arr2
    for (int i = 0; i < m + n; i++) cout << arr3[i] << " ";
    return 0;
}
