#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool binary_search(const vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        // Found the target
        if (arr[mid] == target) return true;
            // Search in the right half
        else if (arr[mid] < target) left = mid + 1;
            // Search in the left half
        else right = mid - 1;
    }

    return false; // Target not found
}

int main() {
    int size, Q;
    cin >> size >> Q;
    vector<int> vt(size);

    for (int i = 0; i < size; i++) cin >> vt[i];
    sort(vt.begin(), vt.end());

    for (int i = 1; i <= Q; i++) {
        int number;
        cin >> number;
        if (binary_search(vt, number)) cout << "Yes";
        else cout << "No!!";
        cout << endl;
    }

    return 0;
}
