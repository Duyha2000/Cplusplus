#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Nhập số lượng phần tử: ";
    cin >> n;

    int arr[n]; // Khai báo mảng với kích thước n, tùy thuộc vào giá trị mà người dùng nhập

    cout << "Nhập " << n << " phần tử: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    if (n % 2 == 0) {
        for (int i = 0; i < n / 2; i += 2) {
            int temp = arr[i];
            arr[i] = arr[n - i - 2];
            arr[n - i - 2] = temp;
        }
    } else {
        for (int i = 0; i <= n / 2; i += 2) {
            int temp = arr[i];
            arr[i] = arr[n - i - 2];
            arr[n - i - 2] = temp;
        }
    }

    cout << "Mảng sau khi đảo ngược các phần tử chẵn: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";

    return 0;
}
