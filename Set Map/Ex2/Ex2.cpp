#include <iostream>
#include <map>

using namespace std;
using c = char;
using i = int;

void resolve() {
    map<c, i> myMap;
    // Nhập các phần tử trong map
    for (int i = 0; i < 3; i++) {
        char key;
        int value;
        cin >> key >> value;
        myMap[key] = value;
    }

    // In ra tất cả các phần tử trong map
    for (auto x: myMap) cout << x.first << " - " << x.second << ' ';
    char eraseKey;
    cin >> eraseKey;
    myMap.erase(eraseKey);
    cout << endl;
    for (auto x: myMap) cout << x.first << " - " << x.second << ' ';
}

int main() {
    //    Click chuột phải Copy path/Reference... -> Đán vào
    freopen("/Users/mac0s/Documents/C++ Course/Set Map/Ex2/input.txt", "r", stdin);
    freopen("/Users/mac0s/Documents/C++ Course/Set Map/Ex2/output.txt", "w", stdout);
    int testCase = 1;
    while (testCase--) resolve();
    return 0;
}