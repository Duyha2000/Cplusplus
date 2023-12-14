#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

// Hàm kiểm tra xem một số có phải là số nguyên tố hay không
bool isPrime(int n) {
    // Trả về true nếu là số nguyên tố, ngược lại trả về false
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int countSuperPrimes(int n) {
    // Vector để lưu trữ các số nguyên tố
    vector<int> primes;
    // Biến để lưu trữ số lượng số siêu nguyên tố
    int superPrimeCount = 0;
    // n = 5
    // Duyệt qua các số từ 2 đến n
    for (int currentNumber = 2; currentNumber <= n; currentNumber++) {
        // Kiểm tra xem số hiện tại có phải là số nguyên tố không
        // khi currentNumber là 5 và 5 được xác nhận là một số nguyên tố, chương trình sẽ thêm 5 vào danh sách primes.
        if (isPrime(currentNumber)) {
            // Nếu là số nguyên tố, thêm vào vector primes
            primes.push_back(currentNumber); // 2 3 5
            // Duyệt qua các số nguyên tố đã có 2,3,5 để kiểm tra siêu nguyên tố
            for (int primeIndex = 0; primeIndex < primes.size() && primes[primeIndex] <= currentNumber; primeIndex++) {
                // primes[primeIndex] là 2 (vì primeIndex = 0)
//
                // Tìm kiếm xem trong mảng primes có số nào bằng currentNumber(5) - primes[primeIndex] (2) = 3 hay không
                // Nếu tồn tại cặp số tạo ra một số nguyên tố mới, tăng superPrimeCount và thoát khỏi vòng lặp
                int target = currentNumber - primes[primeIndex]; // 3
                if (binary_search(primes.begin(), primes.end(), target)) {
                    superPrimeCount++;
                    break;
                }
            }
        }
    }
    return superPrimeCount;
}


int main() {
    int n;
    cin >> n;
    cout << countSuperPrimes(n) << endl;
    return 0;
}
