#include <iostream>

using namespace std;

int main() {
    int dayOfWeek;
    cin >> dayOfWeek;
    string result;
//    if (dayOfWeek == 0) result = "sunday";
//    else if (dayOfWeek == 1) result = "monday";
//    else if (dayOfWeek == 2) result = "tuesday";
//    else if (dayOfWeek == 3) result = "wednesday";
//    else if (dayOfWeek == 4) result = "thursday";
//    else if (dayOfWeek == 5) result = "friday";
//    else result = "saturday";
//
//    cout << result;
// switch - dayOfWeek
// case - trường hợp
// thay đổi trường hợp
    switch (dayOfWeek) {
        case 0:
            result = "Sunday";
            break;
        case 1:
            result = "Tuesday";
            break;
        case 2:
            result = "Monday";
            break;
        default:
            cout << "Nhập không đúng ngày trong tuần";
            break;
    }
    cout << result;
    return 0;
}