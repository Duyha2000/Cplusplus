#include <iostream>

using namespace std;

int main() {
    int size, position, number;

    // Nhập vào kích thước mảng (size), vị trí (position), và số cần chèn (number).
    cin >> size >> position >> number;

    int arr[size]; // Tạo một mảng có kích thước là 'size'.

    // Kiểm tra xem vị trí cần chèn (position) có hợp lệ không.
    if (position < 0 || position >= size) cout << "Vị trí không tồn tại"; // In ra thông báo nếu vị trí không hợp lệ.

    // Nhập các giá trị vào mảng 'arr'.
    for (int i = 0; i < size; i++) cin >> arr[i];

    // Duyệt qua mảng 'arr' từ cuối về vị trí cần chèn (position) và dịch phần tử sang phải.
    // Vòng lặp for này bắt đầu từ i = size, tức là bắt đầu từ phần tử cuối cùng của mảng, và tiếp tục lặp ngược về phía trước cho đến khi i đạt đến position + 1.
    //
    //Mục đích của vòng lặp này là di chuyển các phần tử trong mảng sang phải để tạo một vị trí trống tại vị trí position để có thể chèn số mới vào đó.
    //
    //Mỗi lần lặp, phần tử tại vị trí i được gán bằng giá trị của phần tử ở vị trí i - 1. Điều này làm cho toàn bộ mảng dịch sang phải.
    //
    //Vòng lặp này hoạt động ngược về phía trước, nghĩa là phần tử tại vị trí i sẽ lấy giá trị của phần tử ở vị trí i - 1, và vị trí i tiếp theo cũng lấy giá trị của vị trí i - 1. Điều này tiếp tục cho đến khi i đạt đến position + 1.
    //
    //Sau khi vòng lặp này kết thúc, bạn sẽ có một vị trí trống ở position, và bạn có thể chèn số number vào đó bằng câu lệnh arr[position] = number;.
    //
    //Kết quả là số number sẽ được chèn vào mảng arr tại vị trí position, và các phần tử khác trong mảng sẽ bị dịch sang phải để tạo chỗ trống.
    for (int i = size; i >= position + 1; i--) arr[i] = arr[i - 1];

    arr[position] = number; // Chèn số 'number' vào vị trí 'position' trong mảng.

    // In ra mảng sau khi đã chèn phần tử mới.
    for (int i = 0; i < size + 1; i++) cout << arr[i] << " ";

    return 0;
}
