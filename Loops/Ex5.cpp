#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int choice;
    bool isFlag = true;
    while (isFlag) {
        // Hiển thị menu chức năng
        cout << "Menu chuc nang:" << endl;
        cout << "1. Kiểm tra số chẵn hoặc lẻ" << endl;
        cout << "2. Kiểm tra số nguyên tố" << endl;
        cout << "3. Kiểm tra số chia hết cho 3" << endl;
        cout << "4. Thoat chuong trinh" << endl;
        cout << "Nhap lua chon cua ban: ";
        cin >> choice;
        switch (choice) {
            case 1:
                int n;
                cout << "Nhap mot so nguyen: ";
                cin >> n;
                if (n % 2 == 0)
                    cout << "So chan" << endl;
                else
                    cout << "So le" << endl;
                break;
            case 2:
                int a;
                cout << "Nhap mot so nguyen: ";
                cin >> a;
                if (a < 2) {
                    cout << "Khong phai so nguyen to" << endl;
                } else {
                    bool isPrime = true;
                    for (int i = 2; i <= sqrt(a); i++) {
                        if (a % i == 0) {
                            isPrime = false;
                            break;
                        }
                    }
                    if (isPrime) cout << "La so nguyen to" << endl;
                    else cout << "Khong phai so nguyen to" << endl;
                }
                break;
            case 3:
                int b;
                cout << "Nhap mot so nguyen: ";
                cin >> b;
                if (b % 3 == 0)
                    cout << "So chia het cho 3" << endl;
                else
                    cout << "Khong chia het cho 3" << endl;
                break;
            case 4:
                isFlag = false;
                break;
            default:
                cout << "Lua chon khong hop le. Vui long chon lai." << endl;
                break;
        }
    }
}
