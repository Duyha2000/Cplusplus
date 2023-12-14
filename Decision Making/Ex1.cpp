#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
//    if (n % 2 == 0) cout << "Even number";
//    else cout << "Odd number";
//    result ? if : else
    string result = n % 2 == 0 ? "Even number" : "Odd number";
    cout << result;
    return 0;
}