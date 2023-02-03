/*

1) Create an array ‘res[]’ of MAX size where MAX is number of maximum digits in output.
2) Initialize value stored in ‘res[]’ as 1 and initialize ‘res_size’ (size of ‘res[]’) as 1.
3) Do following for all numbers from x = 2 to n.
……a) Multiply x with res[] and update res[] and res_size to store the multiplication result.

How to multiply a number ‘x’ with the number stored in res[]?
The idea is to use simple school mathematics. We one by one multiply x with every digit of res[]. The important point to note here is digits are multiplied from rightmost digit to leftmost digit. If we store digits in same order in res[], then it becomes difficult to update res[] without extra space. That is why res[] is maintained in reverse way, i.e., digits from right to left are stored.

multiply(res[], x)
1) Initialize carry as 0.
2) Do following for i = 0 to res_size – 1
….a) Find value of res[i] * x + carry. Let this value be prod.
….b) Update res[i] by storing last digit of prod in it.
….c) Update carry by storing remaining digits in carry.
3) Put all digits of carry in res[] and increase res_size by number of digits in carry.

Example to show working of multiply(res[], x)
A number 5189 is stored in res[] as following.
res[] = {9, 8, 1, 5}
x = 10

Initialize carry = 0;

i = 0, prod = res[0]*x + carry = 9*10 + 0 = 90.
res[0] = 0, carry = 9

i = 1, prod = res[1]*x + carry = 8*10 + 9 = 89
res[1] = 9, carry = 8

i = 2, prod = res[2]*x + carry = 1*10 + 8 = 18
res[2] = 8, carry = 1

i = 3, prod = res[3]*x + carry = 5*10 + 1 = 51
res[3] = 1, carry = 5

res[4] = carry = 5

res[] = {0, 9, 8, 1, 5} 
*/
/*
giai thừa (n)
1) Tạo mảng 'res []' có kích thước MAX trong đó MAX là số chữ số tối đa ở đầu ra.
2) Khởi tạo giá trị được lưu trữ trong 'res []' là 1 và khởi tạo 'res_size' (kích thước của 'res []') là 1.
3) Thực hiện theo các bước sau cho tất cả các số từ x = 2 đến n.
…… a) Nhân x với res [] và cập nhật res [] và res_size để lưu trữ kết quả phép nhân.

Làm thế nào để nhân một số 'x' với số được lưu trữ trong res []?
Ý tưởng là sử dụng toán học đơn giản. Chúng ta lần lượt nhân x với mọi chữ số của res []. Điểm quan trọng cần lưu ý ở đây là các chữ số được nhân từ chữ số tận cùng bên phải sang chữ số tận cùng bên trái. Nếu chúng ta lưu trữ các chữ số theo cùng một thứ tự trong res [], thì rất khó để cập nhật res [] mà không có thêm dung lượng. Đó là lý do tại sao res [] được duy trì theo cách ngược lại, tức là các chữ số từ phải sang trái được lưu trữ.

nhân (res [], x)
1) Khởi tạo carry bằng 0.
2) Thực hiện theo sau cho i = 0 thành res_size - 1
… .a) Tìm giá trị của res [i] * x + carry. Hãy để giá trị này là sản phẩm.
… .B) Cập nhật res [i] bằng cách lưu trữ chữ số cuối cùng của sản phẩm trong đó.
… .C) Cập nhật thông tin mang theo bằng cách lưu trữ các chữ số còn lại.
3) Đặt tất cả các chữ số của carry vào res [] và tăng res_size theo số chữ số trong carry.

Ví dụ để hiển thị hoạt động của nhân (res [], x)
Số 5189 được lưu trữ trong res [] như sau.
res [] = {9, 8, 1, 5}
x = 10

Khởi tạo carry = 0;

i = 0, prod = res [0] * x + carry = 9 * 10 + 0 = 90.
res [0] = 0, carry = 9

i = 1, prod = res [1] * x + carry = 8 * 10 + 9 = 89
res [1] = 9, carry = 8

i = 2, prod = res [2] * x + carry = 1 * 10 + 8 = 18
res [2] = 8, carry = 1

i = 3, prod = res [3] * x + carry = 5 * 10 + 1 = 51
res [3] = 1, carry = 5

res [4] = carry = 5

res [] = {0, 9, 8, 1, 5} 
*/
// C++ program to compute factorial of big numbers 
#include<iostream> 
using namespace std; 
  
// Maximum number of digits in output 
#define MAX 100000
  
int multiply(int x, int res[], int res_size); 
  
// This function finds factorial of large numbers 
// and prints them 
void factorial(int n) 
{ 
    int res[MAX]; 
  
    // Initialize result 
    res[0] = 1; 
    int res_size = 1; 
  
    // Apply simple factorial formula n! = 1 * 2 * 3 * 4...*n 
    for (int x=2; x<=n; x++) 
        res_size = multiply(x, res, res_size); 
  
    cout << "Factorial of given number is \n"; 
    for (int i=res_size-1; i>=0; i--) 
        cout << res[i]; 
} 
  
// This function multiplies x with the number  
// represented by res[]. 
// res_size is size of res[] or number of digits in the  
// number represented by res[]. This function uses simple  
// school mathematics for multiplication. 
// This function may value of res_size and returns the  
// new value of res_size 
int multiply(int x, int res[], int res_size) 
{ 
    int carry = 0;  // Initialize carry 
  
    // One by one multiply n with individual digits of res[] 
    for (int i=0; i<res_size; i++) 
    { 
        int prod = res[i] * x + carry; 
  
        // Store last digit of 'prod' in res[]   
        res[i] = prod % 10;   
  
        // Put rest in carry 
        carry  = prod/10;     
    } 
  
    // Put carry in res and increase result size 
    while (carry) 
    { 
        res[res_size] = carry%10; 
        carry = carry/10; 
        res_size++; 
    } 
    return res_size; 
} 
  
// Driver program 
int main() 
{ 
    factorial(10000); 
    return 0; 
} 