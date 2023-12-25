## Bài 1: Tìm X (FindX)

Cho một mảng A gồm N số nguyên dương và Q truy vấn cần trả lời. Với mỗi truy vấn, bạn được biết một số nguyên X và bạn
phải tìm hiểu xem X có trong mảng A hay không.
Input:
 Dòng đầu chứa hai số nguyên N và Q.
 Dòng thứ hai chứa N số nguyên cách nhau khoảng trắng, biểu thị các phần tử Ai.
 Q dòng tiếp theo, mỗi dòng chứa một số nguyên X mô tả một truy vấn.
Output:
Tương ứng với mỗi truy vấn, chương trình của bạn cần in ra một dòng chứa thông báo YES nếu X có trong A, ngược lại thì
in NO.
Ràng buộc:
 1 ≤ N, Q ≤ 105
 1 ≤ Ai , X≤ 109 Ví dụ
Input:
5 10
50 40 30 20 10
10
20
30
40
50
60
70
80
90
100
Output:
YES
YES
YES
YES
YES
NO
NO
NO
NO
NO

## Bài tập 2: Nhập vào một số nguyên dương n, tiếp theo là n số nguyên lần lượt là các phần tử trong dãy a, cuối cùng nhập số nguyên x.

Hãy đưa ra chỉ số đầu tiên của phần tử đầu tiên có giá trị bằng x, nếu không tồn tại số đó thì trả về -1.

- Ví dụ:
  Input: nums = [-1,0,3,5,9,12], target = 9
  Output: 4
  Explanation: 9 exists in nums and its index is 4
- Ví dụ 2:
  Input:
  3
  1 2 3
  4
  Input: nums = [-1,0,3,5,9,12], target = 2
  Output: -1
  Explanation: 2 does not exist in nums so return -1

## Bài tập 3: Số siêu nguyên tố

Một số nguyên tố được gọi là số siêu nguyên tố nếu nó là tổng của hai số nguyên tố.
Yêu cầu:
Cho đầu vào là một số tự nhiên N được nhập từ bàn phím. Tìm có bao nhiêu số siêu nguyên tố trong khoảng từ 1 đến N và in
kết quả ra màn hình.
Ví dụ 1:
Đầu vào: 5
Đầu ra: 1
Giải thích:
Với 5 = 2 + 3 nên 5 là số siêu nguyên tố.
Ví dụ 2:
Đầu vào: 10
Đầu ra: 2
Giải thích:
Trong này có 5 và 7 là số siêu nguyên tố

## Bài tập 4: Two sums

Cho mảng số nguyên nums và một số nguyên target. Hãy tìm hai phần tử mà tổng của chúng chính bằng target, trả về kết quả
là vị trí index của chúng trong mảng nums.
Mỗi phần tử trong mảng chỉ được sử dụng một lần trong phép tính tổng.
Kết quả trả về dưới dạng mảng, sắp xếp theo thứ tự bất kì.

Điều kiện:

- 2 <= nums.length <= 10^4.
- -10^9 <= nums[i] <= 10^9
- -10^9 <= target <= 10^9.
  Ví dụ 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Ví dụ 2:

Input: nums = [2,3,4], target = 6
Output: [1,2]
Ví dụ 3:

Input: nums = [3,3], target = 6
Output: [0,1]

## Bài tập 5: Arranging Coins (https://leetcode.com/problems/arranging-coins/description/)

Bạn có n đồng xu và muốn sử dụng chúng để xây dựng một bậc thang. Mỗi hàng của bậc thang có số lượng đồng xu tăng dần từ
1 đến hàng thứ k, với k là số hàng. Hàng cuối cùng của bậc thang có thể không đầy đủ.

Hãy viết một chương trình hoặc hàm có đầu vào là số nguyên n, và đầu ra là số lượng hàng hoàn chỉnh của bậc thang mà bạn
có thể xây dựng bằng n đồng xu.

- Ví dụ:
  Input: n = 5
  Output: 2
  Giải thích: Bạn có thể xây dựng bậc thang với 2 hàng. Hàng thứ nhất có 1 đồng xu và hàng thứ hai có 2 đồng xu, tổng
  cộng là 3 đồng xu.
- Ví dụ 2:
  Input: n = 8
  Output: 3
  Giải thích: Bạn có thể xây dựng bậc thang với 3 hàng. Hàng thứ nhất có 1 đồng xu, hàng thứ hai có 2 đồng xu, và hàng
  thứ ba có 3 đồng xu, tổng cộng là 6 đồng xu.
