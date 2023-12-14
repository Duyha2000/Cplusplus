#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    string result = (n % 4 == 0 && n % 100 != 0 || n % 400 == 0) ? "la nam nhuan" : "khong la nam nhuan";
    cout << result;
    return 0;
}
