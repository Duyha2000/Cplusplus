#include <iostream>

using namespace std;

int main() {
    int size, count = 0, numberDel; // Khai báo biến kích thước mảng (size), biến đếm số lần xuất hiện của phần tử cần xóa (count), và giá trị phần tử cần xóa (numberDel)
    cin >> size >> numberDel; // Nhập kích thước mảng và giá trị phần tử cần xóa
    int arr[size]; // Khai báo mảng có kích thước size
    for (int i = 0; i < size; i++) cin >> arr[i]; // Nhập các phần tử của mảng

    for (int i = 0; i < size; i++) {
        if (numberDel == arr[i]) count += 1; // Đếm số lần xuất hiện của phần tử cần xóa trong mảng
    };
    int newArr[size -
               count], newIndex = 0; // Khai báo mảng mới có kích thước size - count (loại bỏ phần tử cần xóa), và biến newIndex để theo dõi chỉ số của mảng mới
    for (int i = 0; i < size; i++) {
        if (numberDel != arr[i]) {
            newArr[newIndex] = arr[i]; // Sao chép các phần tử không bằng phần tử cần xóa vào mảng mới
            newIndex++;
        }
    };

    for (int i = 0; i < size - count; i++) cout << newArr[i] << " "; // In ra mảng mới sau khi xóa phần tử
    return 0;
}
