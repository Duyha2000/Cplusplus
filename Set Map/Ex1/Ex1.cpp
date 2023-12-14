#include <iostream>
#include <map>

using namespace std;
using ll = long long;
using db = double;

void resolve() {
    map<ll, string> myMap;
    // Nhập các phần tử trong map
    for (int i = 1; i <= 5; i++) {
        string value;
        cin >> value;

        myMap[i] = value;
    }

    // In ra tất cả các phần tử trong map
    for (auto x: myMap) cout << x.first << " - " << x.second << '\n';
    // In ra chiều dài của map
    cout << myMap.size();
}

int main() {
    //    Click chuột phải Copy path/Reference... ->Đán vào
    freopen("/Users/mac0s/Documents/C++ Course/Set Map/Ex1/input.txt", "r", stdin);
    freopen("/Users/mac0s/Documents/C++ Course/Set Map/Ex1/output.txt", "w", stdout);
    int testCase = 1;
    while (testCase--) resolve();
    return 0;
}