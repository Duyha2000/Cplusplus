#include <iostream>
#include <cmath>

using namespace std;

int main() {
//    4.1
//    int number, sum = 0;
//    cin >> number;
//
//    while (number > 0) {
//        sum += number % 10;
//        number /= 10;
//    }
//    cout << sum;
    int number, count = 0, numberReverse = 0;
    cin >> number;
    int temp = number;
    while (temp > 0) {
        temp /= 10;
        count++;
    }
    temp = number;
    for (int i = count - 1; i >= 0; i--) {
        numberReverse += temp % 10 * pow(10, i);
        temp /= 10;
    }
    cout << numberReverse;
    return 0;
}