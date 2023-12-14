#include <iostream>
#include <map>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    map<int, int> frequencyMap;

    cout << "Enter the elements:\n";
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;

        // Sử dụng count để kiểm tra sự tồn tại của key
        // Nếu tồn tại, tăng giá trị tương ứng
        if (frequencyMap.count(num) > 0) frequencyMap[num]++;
            // Nếu không tồn tại, thêm một cặp mới vào map với giá trị là 1
        else frequencyMap[num] = 1;
    }

    cout << "Output:\n";
    for (auto x: frequencyMap) cout << x.first << " " << x.second << "\n";

    return 0;
}
