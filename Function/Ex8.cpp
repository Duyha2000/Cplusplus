#include <iostream>

using namespace std;

// Tính tổng giai thừa 1 number
int factorial(int n) {
    int factorial = 1;
    if (n <= 1) return factorial;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    return factorial;
}


int sumFactorial(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int n;
    cout << "Nhập số n: ";
    cin >> n;
    if (n < 0) {
        cout << "Vui lòng nhập một số không âm." << endl;
        return 1;
    } else {
        cout << "Tổng các chữ so của " << n << "! là: ";
        cout << sumFactorial(factorial(n));
    }

    return 0;
}
