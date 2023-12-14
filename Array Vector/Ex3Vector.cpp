#include <iostream>
#include <algorithm>

using namespace std;

void display(const vector<int> &v) { // Pass the vector by reference (const as it's not modified)
    for (int i = 0; i < v.size(); i++) cout << v[i] << " ";
}

int main() {
    int n;

    cout << "Nhập số lượng phần tử: ";
    cin >> n;

    vector<int> vt(n); // Khai báo mảng với kích thước n, tùy thuộc vào giá trị mà người dùng nhập

    cout << "Nhập " << n << " phần tử: ";
    for (int i = 0; i < n; i++) cin >> vt[i];
    reverse(vt.begin(), vt.end());
    cout << "After reverse" << endl;
    display(vt);
    return 0;
}