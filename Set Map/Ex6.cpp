#include <iostream>
#include <set>

using namespace std;


int main() {
    int testCase;
    cin >> testCase;
    while (testCase--) {
        set<int> st;
        int size;
        cin >> size;
        for (int i = 0; i < size; i++) {
            int number;
            cin >> number;
            st.insert(number);
        }
        cout << st.size();
    }
    return 0;
}