#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, maxValue2;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    // compare
    sort(arr.begin(), arr.end(), greater<int>());

    for (int i = 1; i < n; i++) {
        if (arr[0] > arr[i]) {
            maxValue2 = arr[i];
            break;
        }
    }
    cout << maxValue2;
}