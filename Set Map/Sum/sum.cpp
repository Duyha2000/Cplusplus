#include <iostream>
#include <map>
#include <vector>

using namespace std;
using ll = long long;
// Nhập 2 so a,b -> tinh tong 2 so a,b

void resolveSum() {
    int a, b;
    cin >> a >> b;
    cout << a + b << "\n";
    map<int, string> myMap = {
            {1, "One"},
            {2, "Two"},
            {3, "Three"},
            {4, "Four"}
    };
    for (auto x: myMap) cout << x.first << " " << x.second << endl;
}

int main() {

    freopen("/Users/mac0s/Documents/C++ Course/Set Map/Sum/input.txt", "r", stdin); // read
    freopen("/Users/mac0s/Documents/C++ Course/Set Map/Sum/output.txt", "w", stdout); // write
    int testCase;
    cin >> testCase;
    while (testCase--) resolveSum();
    vector<int> vt{1,2,3,4,5};
    int size; cin >> size;
    for(int i = 0 ; i < size ; i++) cout << vt[i] << " ";


    return 0;
}