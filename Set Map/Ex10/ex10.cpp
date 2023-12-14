#include <iostream>
#include <map>
using namespace std;

void resolve(){
    int size; cin >> size;
    map<int,int> myMap;
    for(int i = 0 ; i < size;i++){
        int number; cin >> number;
        if(myMap.count(number) > 0 ) myMap[number]++;
        else myMap[number] = 1;
    }
    int maxCount = 0;
    int mostFrequentNumber;

    for(auto x: myMap){
        if (x.second > maxCount) {
            maxCount = x.second;
            mostFrequentNumber = x.first;
        }
    }
    cout << mostFrequentNumber << " " << maxCount  << endl;
}

int main(){
    freopen("/Users/mac0s/Documents/CourseCplusplus/Set Map/Ex10/input.txt","r",stdin);
    freopen("/Users/mac0s/Documents/CourseCplusplus/Set Map/Ex10/output.txt","w",stdout);
    int testCase; cin >> testCase;
    while (testCase--) resolve();
}