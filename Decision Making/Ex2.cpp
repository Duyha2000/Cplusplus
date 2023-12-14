#include <iostream>

using namespace std;

int main() {
    int salaryPer1, salaryPer2;
    cin >> salaryPer1 >> salaryPer2;
    string result = salaryPer1 > salaryPer2 ? "Thằng 1 lương cao hơn 2" : "Thằng 2 lương cao hơn 1";
    cout << result;

    return 0;
}