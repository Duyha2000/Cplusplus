#include <iostream>

using namespace std;

int main() {
    int size, target;
    cin >> size >> target;
    int arr[size], result[2];
    for (int i = 0; i < size; i++) cin >> arr[i];

    bool found = false; // Sử dụng biến boolean để kiểm tra xem đã tìm thấy cặp số thỏa mãn chưa

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == target) {
                result[0] = arr[i];
                result[1] = arr[j];
                found = true; // Đánh dấu đã tìm thấy cặp số
                break; // Thoát khỏi vòng lặp nếu đã tìm thấy cặp số thỏa mãn
            }
        }
        if (found) {
            break; // Thoát khỏi vòng lặp ngoài cùng nếu đã tìm thấy cặp số
        }
    }

    for (int i = 0; i < 2; i++) cout << result[i] << " ";
    return 0;
}
