#include <iostream>
#include <set>

using namespace std;

int main() {
    int testCase;
    cin >> testCase;
    while (testCase--) {
        set<int> st1, st2, st3;
        int size1, size2;
        cin >> size1 >> size2;
        for (int i = 0; i < size1; i++) {
            int number;
            cin >> number;
            st1.insert(number); //1 2 2 9
        }


        for (int i = 0; i < size2; i++) {
            int number;
            cin >> number;
            st2.insert(number); // 2 0 9 8 3
        }

        for (auto number: st1) if (st2.count(number) <= 0) st3.insert(number);

        if (st3.empty()) {
            cout << "NOT FOUND";
        } else {
            for (auto number: st3) cout << number << " ";
        }
        cout << endl;
    }
    return 0;
}