#include <iostream>
#include <map>

using namespace std;

int main() {
    int testCase;
    cin >> testCase;
    while (testCase--) {
        int n;
        cin >> n;
        map<string, int> mp;
        for (int i = 0; i < n; i++) { // Fix: Use n instead of mp.size()
            string language;
            cin >> language;
            if (mp.count(language) > 0) mp[language]++;
            else mp[language] = 1;
        }
        cout << "Output:\n";
        for (auto x: mp) cout << x.first << " " << x.second << "\n";
    }

    return 0;
}
