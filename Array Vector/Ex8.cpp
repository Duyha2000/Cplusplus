#include <iostream>

using namespace std;

int main() {
    int size, indexDel;
    cin >> size >> indexDel;  // Nhập kích thước mảng và chỉ số phần tử cần xóa
    int arr[size];  // Khai báo mảng có kích thước size

    if (indexDel < 0 || indexDel >= size) {
        cout << "Invalid postion!";  // Kiểm tra nếu indexDel không hợp lệ, in ra thông báo và kết thúc chương trình
        return 0;
    }

    for (int i = 0; i < size; i++) {
        cin >> arr[i];  // Nhập các phần tử của mảng
    }

    for (int i = indexDel; i < size - 1; i++) {
        arr[i] = arr[i + 1];  // Dịch chuyển các phần tử từ vị trí indexDel về bên trái để ghi đè lên phần tử cần xóa
    }

    for (int i = 0; i < size - 1; i++) {
        cout << arr[i] << " ";  // In ra các phần tử còn lại sau khi xóa phần tử
    }
    return 0;
}
