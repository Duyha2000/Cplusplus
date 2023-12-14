#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

int main() {
    int size, Q;
    cin >> size >> Q;
    vector<int> vt(size);

    for (int i = 0; i < size; i++) cin >> vt[i];
    sort(vt.begin(), vt.end());
    for (int i = 1; i <= Q; i++) {
        int number;
        cin >> number;
        if (binary_search(vt.begin(), vt.end(), number)) cout << "Yes";
        else cout << "No!!";
        cout << endl;
    }

    return 0;
}
