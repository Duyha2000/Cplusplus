#include <iostream>
#include <set>
#include <vector>
#include <numeric>

using namespace std;


int main() {
    // vector<int> myVector{1,2,3,45,45};
    int size; // 5
    cin >> size;
    vector<int> arr(size);
    // int arr[size];
    int sum = 0;

    set<int> st;
//    for (int i = 0; i < size; i++) cin >> arr[i];
//    for (int i = 0; i < size; i++) sum += arr[i];
    for (int i = 0; i < size; i++) {
        int number;
        cin >> number;
        st.insert(number);
    }
    int sumSet = accumulate(st.begin(), st.end(), 0);
    cout << "SUM = " << sumSet << endl; // SUM = 25
    return 0;
}

