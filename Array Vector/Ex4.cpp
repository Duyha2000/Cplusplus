#include <iostream>
#include<algorithm>

using namespace std;

bool cmp(int A, int B) {
    return A > B;
}

int main() {
//    Input: 3 4 5 4 5
//    Output: 4
// -> Sắp xếp mảng giảm dần: 5 5 4 4 3
// maxValue2
// if(arr[i] < arr[0]{
// maxValue2 = arr[i] break
// }
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++) cin >> arr[i];
    // Sắp xếp mảng giảm dần.
    sort(arr, arr + size);
    //  Sắp xếp mảng tăng dần.  sort(arr, arr + size);

    cout << arr[0];
    return 0;
}