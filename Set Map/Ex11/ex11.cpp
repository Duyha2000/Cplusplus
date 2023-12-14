#include <iostream>
#include <map>
using namespace std;

void resolve() {
    string input;
    cin >> input;

    map<char, int> myMap;

    // Đếm số lần xuất hiện của từng kí tự trong chuỗi
    for (char character : input) {
        if (myMap.count(character) > 0)
            myMap[character]++;
        else
            myMap[character] = 1;
    }

    int maxCount = 0;
    char mostFrequentCharacter = 'z';  // Gán giá trị mặc định là 'z' (để có thứ tự từ điển nhỏ nhất)

    // Tìm kí tự xuất hiện nhiều nhất và có thứ tự từ điển nhỏ nhất
    for (auto x : myMap) {
        if (x.second > maxCount || (x.second == maxCount && x.first < mostFrequentCharacter)) {
            maxCount = x.second;
            mostFrequentCharacter = x.first;
        }
    }

    cout << mostFrequentCharacter << " " << maxCount << endl;
}


int main(){
    freopen("/Users/mac0s/Documents/CourseCplusplus/Set Map/Ex11/input.txt","r",stdin);
    freopen("/Users/mac0s/Documents/CourseCplusplus/Set Map/Ex11/output.txt","w",stdout);
    int testCase; cin >> testCase;
    while (testCase--) resolve();
}