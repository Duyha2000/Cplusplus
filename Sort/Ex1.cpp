
#include<iostream>
#include<vector>

using namespace std;

void selectionSort(int arr[], int n) {
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx]) min_idx = j;


        // Đổi chỗ phần tử nhỏ nhất với phần tử đầu tiên
        swap(arr[min_idx], arr[i]);
    }
}

int main() {
    int size, max, i;
    cin >> size;
    vector<int> vt(size);
    for (i = 0; i < size; i++) {
        int number;
        cin >> number;
        vt[i] = number;
    }

    for (auto x: vt) cout << x << " ";
    return 0;
}
