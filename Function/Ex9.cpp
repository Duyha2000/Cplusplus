#include <iostream>
#include <cmath>

using namespace std;

// Tổng 20 số nguyên tố đầu tiên
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) if (n % 2 == 0) return false;
    return true;
}

//
int sumPrimeGreater100() {
    int count = 0;
    int prime = 2;
    int sum = 0;
    while (count < 20) {
        if (isPrime(prime)) {
            sum += prime;
            count++;
        }
        prime++;
    }
    return sum;
}

int main() {
    cout << sumPrimeGreater100();
}