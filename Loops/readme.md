# Dùng vòng lặp while

## Bài tập 1:

Bạn hãy viết chương trình nhập vào bàn phím số nguyên n và hiển thị ra các số chẵn từ n tới 100.
Ví dụ nếu nhập n = 90 thì chương trình sẽ hiển thị ra màn hình: 90 92 94 96 98 100

## Bài tập 2: Nhập 1 số Tính lũy thừa của một số:

Ví dụ: 5! = 5 * 4 * 3 * 2 * 1

## Bài tập 3:

Bạn hãy viết chương trình nhập từ bàn phím hai số nguyên a và b. Sau đó hiển thị ra màn hình các số từ a tới b mà chia
hết cho cả 3 và 5.
Ví dụ nếu nhập a = 1, b = 50 thì chương trình sẽ hiển thị ra màn hình: 15 30 45

## Bài tập 4: Nhập 1 số nguyên và tính tổng các số đó, viết số nghịch đảo của nó (dễ)

Ví dụ: 3243 -> Tổng = 3 + 2 + 4 + 3 -> Nghịch đảo: 3423

## Bài tập 5: Chúng ta sẽ phát triển một ứng dụng nhiều chức năng cho phép người dùng chọn chức năng để sử dụng.

Menu gồm :

- Kiểm tra tính chẵn lẻ của 1 số.
- Kiểm tra số nguyên tố.
- Kiểm tra một số có chia hết cho 3 không.
- Thoát
  Gợi ý các bước thực hiện:
  Bước 1: Khai báo biến choice để ghi nhớ lựa chọn của người dùng.

Bước 2: Sử dụng vòng lặp while để hiển thị menu như yêu cầu và cho phép người dùng nhập lựa chọn của họ.

Bước 3: Sử dụng cấu trúc điều kiện switch … case để xét giá trị người dùng nhập vào và điều hướng đến chức năng tương
ứng . Nếu người dùng nhập không hợp lệ thì thông báo nhập sai và yêu cầu nhập lại.

## Bài tập 6: Trong phần này, chúng ta sẽ phát triển một ứng dụng tính chu vi và diện tích theo từng loại hình dựa trên menu chức năng.

Menu gồm :

- Tính chu vi và diện tích hình chữ nhật .
- Tính chu vi và diện tích hình tam giác
- Tính chu vi và diện tích hình tròn.
- Thoát

Gợi ý các bước thực hiện:

Bước 1: Khai báo biến choice để ghi nhớ lựa chọn của người dùng.

Bước 2: Sử dụng vòng lặp while để hiển thị menu như yêu cầu và cho phép người dùng nhập lựa chọn của họ.

Bước 3: Sử dụng cấu trúc điều kiện switch … case để xét giá trị người dùng nhập vào và điều hướng đến chức năng tương
ứng . Nếu người dùng nhập không hợp lệ thì thông báo nhập sai và yêu cầu nhập lại.

## Bài tập 7: Nhập từ bàn phím số nguyên n và hiển thị ra màn hình số các ước số của n.

Ví dụ nếu nhập n = 12 thì chương trình sẽ hiển thị ra màn hình: 6
Giải thích: 12 có 6 ước là 1, 2, 3, 4, 6, 12

## Bài tập 8:  nhập từ bàn phím hai số nguyên dương a và b. Sau đó hiển thị ra màn hình kết quả của a^b.

Ví dụ nếu nhập a = 2, b = 3 thì chương trình sẽ hiển thị ra màn hình: 8
Giải thích: 2 * 2 * 2 = 8.

# Bài tập vẽ hình dùng vòng lặp for lồng nhau

# Bài tập vẽ hình bằng 2 vòng lặp for

Một số điều cần nhớ:
+++ Vòng lặp bên ngoài vẽ số dòng ( nếu tam gíac thuận thì điều kiện lặp là i++, giá trị khởi tạo tất nhiên là i = 1

*
**
***
**** 
còn đây là tam giác nghịch lấy bước nhảy i--, giá trị kết thúc sẽ phải là i>=1, và ta lộn ngược lại hinh tam giác lên:
****
***
**
*

vậy cái cuối cùng ta cần xét đó chính là điều kiện
+++ Vòng lặp bên trong xét mỗi dòng có bao nhiêu cột (có 2 dạng là vẽ hình không có khoảng trắng, 2 ví dụ trên, và vẽ
hình có khoảng trắng)

*
**
***
**** đây là trường hợp vẽ hình có khoảng trắng.
Ở vòng lặp thứ 2 thì ta luôn có j = 1, chạy từ cột đầu tiên, bước nhảy là j++, cái ta cần tìm là mối liên hệ giữa j và i
và kích thước ta nhập vào

# Ví dụ: vẽ hình tam giác vuông cân bên trái với kích thước ta nhập. Ví dụ ở đây size = 4

*
**
***
**** 
int size ; sout size
for(int i = 1 ; i <= size ; i++) {
for ( int j = 1; j <=i ;j++) System.out.print (*)
System.out.println()
}
Đây là tam giác thuận, nên ta check từ dòng 1, i = 1; các dòng tăng dần -> 4. i <= size; i ++
Vòng for bên trong: ta cũng check từ cột 1, số cột phải tăng dần trên mỗi dòng, j =1 ; j++, Điều kiện ta thấy:
Dòng 1 chỉ cột 1 có *
Dòng 2 chỉ cột 1,2 có *
Dòng 3 chỉ cột 1,2,3 có *
Dòng 4 chỉ cột 1,2,3,4 có *
-> Cột luôn nhỏ hơn hoặc bằng dòng -> j <=i
Sau khi kết vòng lặp bên trong ta phải xuống dòng, vì ở đây vòng for ngoài sẽ chạy vòng for trong để vẽ số sao trên
1 dòng, sau đó nó sẽ xuống dòng để chạy vòng for ngoài để in ra * dòng dưới

# Ví dụ: vẽ hình tam giác vuông ngược cân bên trái với kích thước ta nhập. Ví dụ ở đây size = 4

****
***
**
* 

ở đây tam giác ngược, điều kiện i-- và lộn ngược tam giác lên:

*
**
***
**** 
ta sẽ được lại tam giác như trên
cin >> size;
for(int i = size ; i >= 1;i--){
for ( int j = 1; j <=i ;j++) System.out.print (*)
System.out.println()
} lộn ngược tam giác còn điều kiện bên trong vẫn không đổi

+++ Vẽ hinh có khoảng trắng (ta cần thêm bên trong vòng for con 1 vòng for để in ra khoảng trắng nữa)
// # Ví dụ: vẽ hình tam giác vuông bên phảii với kích thước ta nhập. Ví dụ ở đây size = 4
//     *
//    **
//   ***
//  ****
// Cái ta cần xét là trên 1 dòng sẽ có khoảng trắng và dấu *
// -> Dòng 1: 3 khoảng trắng = size -i, 1* = i
// -> Dòng 2: 2 khoảng trắng = size -i và 2* = i
// -> Dòng 3: 1 khoảng trắng = size - i và 3* = i
// -> Dòng 4: 0 khoảng trắng = size -i và 4* = i
// -> Khoảng trắng giảm dần, * tăng dần, kích thước size =4
int main() {
int size;
cin >> size; (input trong java)
for(int i = 1 ; i <= size;i++){
// In khoảng trắng bên trước để dịch phải tam giác
for (int j = 1; j <= size - i; j++) cout << "  "; (output trong java)
// In các dấu sao cho phần tam giác
for (int j = 1; j <= i; j++) cout << "* ";
cout << endl;
}
/*
<!-- Bài tập 1: nhập n là kích thước tam giác, vẽ hình số như trên -->
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
6 6 6 6 6 6
<!-- Bài tập 2: nhập height,witdh là kích thước chiều dài, chiều rộng, vẽ hình số như trên -->
* * * * * * 
*         * 
*         * 
* * * * * * 

<!-- Bài tập 3: Trong bài tập, in ra một mẫu hình kim tự tháp với kích thước là số hàng được nhập vào từ bàn phím -->

*             i = 1 : 4 space 1* (i,j,size) 2*i-1
***           i = 2 : 3 space 3*
*****         i = 3: 2 space 5*
*******       i = 4: 1 space 7*
*********     i = 5 : 0 space 9*
<!-- Bài tập 4: Trong bài tập, in ra một mẫu hình kim tự tháp rỗng với kích thước là số hàng được nhập vào từ bàn phím -->

*
* *
*   *
*     *
*********

<!-- Bài tập 5: Trong bài tập, in ra hình kim cương với phần ruột rỗng. Kích thước của kim cương được nhập vào từ bàn phím. -->

     *
    * *
   *   *
 *      *
*        *       --------------------
 *      *
  *   *
   * *
    *

gợi ý: tách 2 phần tam giác thuận và ngược theo đường line

<!-- Bài tập 6: Trong bài tập, Hãy viết chương trình in ra mẫu đồng hồ cát với kích thước được nhập vào từ bàn phím.-->
*********
 *******
  *****
   ***
    *
   ***
  *****
 *******
*********
<!-- Bài tập 7: Trong bài tập, Hãy viết chương trình in ra mẫu tam giác pascal bên trái với kích thước được nhận vào từ bàn phím -->

*           i = 1: j = 1; space = 5-1 - 1 
**           i = 2; j = 1,2; space = 5-2
***           i = 3 ; j = 1,2,3 ; space = 5-3
****           i = 4; j = 1,2,3,4; space = 5-4
*****           ----------------------------
****
***
**
*

<!-- Bài tập 8: Trong bài tập, viết chương trình in ra mẫu kim tự tháp số ngược với kích thước được nhập vào từ bàn phím -->
123456789
1234567
12345
123
1
<!-- Bài tập 9: Trong bài tập, viết chương trình in ra mẫu kim tự tháp số ngược với kích thước được nhập vào từ bàn phím -->
Kim cương chữ cái
A
ABC
ABCDE
ABCDEFG
ABCDEFGHI
ABCDEFG
ABCDE
ABC
A
*/