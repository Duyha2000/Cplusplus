#include <iostream>
#include <string>

using namespace std;

int main() {
    string inputSentence, robotLanguage;
    getline(cin, inputSentence);

    for (int i = inputSentence.size() - 1; i >= 0; --i) {
        if (inputSentence[i] != ' ') robotLanguage += inputSentence[i];
    }

    cout << robotLanguage << endl;

    return 0;
}
