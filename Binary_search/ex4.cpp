#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Hàm tìm kiếm nhị phân và trả về chỉ số của phần tử đầu tiên có giá trị bằng x
int binary_search(vector<int> nums, int x) {
    int left = 0, right = nums.size() - 1, index;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == x) {
            index = mid;
            right = mid - 1;
        } else if (nums[mid] < x) left = mid + 1;
        else right = mid - 1;
    }
    return index;
}

int main() {
    int size, target;
    cin >> size >> target;
    vector<int> nums(size);
    for (int i = 0; i < size; i++) cin >> nums[i];
    vector<int> result(2);
    sort(nums.begin(), nums.end());

    for (int i = 0; i < size; i++) {
        result[0] = i;
        result[1] = binary_search(nums, target - nums[i]);
    }

    // In ra kết quả
    sort(result.begin(), result.end());
    cout << result[0] << " " << result[1] << endl;

    return 0;
}
