#include <iostream>

using namespace std;

// Function uoc chung lon nhat
int gcd(int a, int b) {
    int gcd;
    for (int i = 1; i < min(a, b); i++) {
        if (a % i == 0 && b % i == 0) gcd = i;
    }
    return gcd;
}

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) if (n % 2 == 0) return false;
    return true;
}

int main() {

    int n = gcd(60, 48);
    int GCPD = -1;

    for (int prime = n; prime >= 2; prime--) {
        if (isPrime(prime) && n % prime == 0) {
            GCPD = prime;
            break;
        }
    }
//    Bài toán in ra số -1 thì gán trực tiếp 1 biến cho -1 -> Chạy if/else or for nếu thỏa mãn diều kiêện thì in ra biến còn kh thì lấy luôn giá trị -1
    if (GCPD != -1) {
        cout << "Greatest Common Prime Divisor (GCPD) is: " << GCPD << endl;
    } else {
        cout << "No common prime divisor found." << endl;
    }
    return 0;
}