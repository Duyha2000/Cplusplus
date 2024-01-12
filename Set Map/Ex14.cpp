#include<iostream>
#include<vector>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> vt(N);
    for (int i = 0; i < N; i++)  cin >> vt[i];

    // Thực hiện K lần phép chuyển đổi
    for (int i = 0; i < K; i++) {
        int firstElement = vt[0];
        for (int j = 1; j < N; j++) vt[j - 1] = vt[j];
        vt[N - 1] = firstElement;
    }

    // In ra dãy số sau K lần chuyển đổi
    for (int i = 0; i < N; i++) cout << vt[i] << " ";
    return 0;
}
