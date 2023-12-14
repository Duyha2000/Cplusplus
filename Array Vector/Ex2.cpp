#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// Input vector:
void inputArr(vector<int> &v) { // Pass the vector by reference
    for (int i = 0; i < v.size(); i++) cin >> v[i];
}

// Khi có dữ liệu thay đổi ta cần dùng tham chiếu: &v

// Output vector
void display(const vector<int> &v) { // Pass the vector by reference (const as it's not modified)
    for (int i = 0; i < v.size(); i++) cout << v[i] << " ";
    cout << endl;
}

int main() {
    int size;
    cin >> size;

    vector<int> v(size);
    inputArr(v);

    cout << "Before sort" << endl;
    display(v);

    /*Sắp xếp vector theo thứ tự tăng dần*/
    sort(v.begin(), v.end());

    cout << "After sort" << endl;
    display(v);
    cout << "Result: " << v[0] << " " << v[size - 1];
    return 0;
}
