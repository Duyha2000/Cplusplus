#include <iostream>
#include <set>

using namespace std;
using ll = long long;
// using db = double;

void solve() {
    ll a, b;
    cin >> a >> b;
    cout << a + b << endl;
}

int main() {
    //    Click chuột phải Copy path/Reference... ->Đán vào
    freopen("/Users/mac0s/Documents/C++ Course/Set Map/Ex9/input.txt", "r", stdin);
    freopen("/Users/mac0s/Documents/C++ Course/Set Map/Ex9/output.txt", "w", stdout);
    int testCase = 1;
    cin >> testCase;
    while (testCase--) solve();
    return 0;
}