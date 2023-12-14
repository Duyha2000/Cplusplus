#include <iostream>
#include <set>

using namespace std;

int main() {
    int testCase;
    cin >> testCase;
    while (testCase--) {
        set<int> st;
        int size, query;
        cin >> size;
        for (int i = 0; i < size; i++) {
            int number;
            cin >> number;
            st.insert(number);
        }
        cin >> query;
        for (int i = 1; i <= query; i++) {
            int numberQuery;
            cin >> numberQuery;
            if (st.count(numberQuery) > 0) cout << "Yes!!!" << endl;
            else cout << "No!!!" << endl;
        }

    }
    return 0;
}