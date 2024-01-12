#include<iostream>
#include<vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> oddNumbers;
    vector<int> evenNumbers;

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        // Số chẵn
        if (num % 2 == 0) evenNumbers.push_back(num);
            // Số lẻ
        else oddNumbers.push_back(num);
    }

    // In ra số lẻ ngược thứ tự
    for (int i = oddNumbers.size() - 1; i >= 0; i--) cout << oddNumbers[i] << " ";

    // In ra số chẵn ngược thứ tự
    for (int i = evenNumbers.size() - 1; i >= 0; i--) cout << evenNumbers[i] << " ";

    return 0;
}
