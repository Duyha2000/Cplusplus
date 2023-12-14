#include <iostream>

using namespace std;

// Bài tập 4: Hiển thị số nguyên dương nhỏ nhất chia hết cho 3, 5 và 7
bool isDivisible357(int number) {
    if (number <= 0) return false;
    else if (number % 3 == 0 && number % 5 == 0 && number % 7 == 0) return true;
    return false;
}

int main() {
    int number = 0;
    bool isFlag = false;
    while (!isFlag) {
        if (isDivisible357(number)) {
            cout << number;
            isFlag = true;
        }
        number++;
    }
    return 0;
}