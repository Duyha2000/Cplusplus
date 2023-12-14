#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Nhập kích thước của mảng

    int size;
    cin >> size;
    // Khởi tạo mảng và nhập giá trị từng phần tử của mảng

    vector<int> nums(size);
    for (int i = 0; i < size; i++) cin >> nums[i];

    // Nhập giá trị target
    int target;
    cin >> target;

    int result[2];

    // Sắp xếp mảng để sử dụng binary_search
    sort(nums.begin(), nums.end());

    // Duyệt qua từng phần tử của mảng
    for (int i = 0; i < size; i++) {
        int complement = target - nums[i];
        // Sử dụng binary_search để kiểm tra xem complement có tồn tại trong mảng không
        if (binary_search(nums.begin(), nums.end(), complement)) {
            result[0] = i;
            result[1] = lower_bound(nums.begin(), nums.end(), complement) - nums.begin();
            break;
        }
    }

    // In ra kết quả
    cout << result[0] << " " << result[1] << endl;

    return 0;
}
