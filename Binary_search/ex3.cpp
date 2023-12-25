#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Hàm tìm kiếm nhị phân trong mảng sắp xếp
bool binarySearch(vector<int> arr, int target) {
    int left = 0, right = arr.size() - 1;

    while (left <= right) {
        int mid = (left+right) / 2;

        if (arr[mid] == target) return true;
        else if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }

    return false;
}

int main() {
    int n;
    cin >> n;

    vector<int> vt;
    int count = 0;

    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            vt.push_back(i); // i là 1 số nguyên tố - j là vị trí số nguyên tố
            // i = 2 3 5 9
            // j = 0 1 2 3
            for (int j = 0; j < vt.size(); j++) {
                if (binarySearch(vt, i - vt[j])) {
                    count++;
                    break;
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}
