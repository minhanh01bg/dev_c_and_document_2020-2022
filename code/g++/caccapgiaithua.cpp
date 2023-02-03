#include <bits/stdc++.h>
using namespace std;
int vis[11];
int main()
{
    int t, n;
    cin>>t;
    while(t--){
        char str[100];
        for(int i = 0;i < 11; ++i)
            vis[i] = 0;
        cin>>n;
        cin>>str;
        for(int i = 0;i < n; ++i)
        {
            if(str[i] == '2')
            {
                vis[2]++;
            }
            else if(str[i] == '3')
            {
                vis[3]++;
            }
            else if(str[i] == '4')
            {
                vis[3]++;
                vis[2] = vis[2] + 2;
            }
            else if(str[i] == '5')
            {
                vis[5]++;
            }
            else if(str[i] == '6')
            {
                vis[5]++;
                vis[3]++;
            }
            else if(str[i] == '7')
            {
                vis[7]++;
            }
            else if(str[i] == '8')
            {
                vis[7]++;
                vis[2] = vis[2] + 3;
            }
            else if(str[i] == '9')
            {
                vis[7]++;
                vis[3] = vis[3] + 2;
                vis[2]++;
            }
        }
        for(int i = 10;i >= 0; --i)
        {
            if(vis[i])
            {
                while(vis[i])
                {
                    cout<<i;
                    vis[i]--;
                }
            }
        }
    cout<<endl;
    }
    return 0;
}

// Đầu tiên, họ chọn một số a có n chữ số và có ít nhất một chữ số lớn hơn 1, có thể có chữ số không ở đầu. Sau đó họ tìm một số nguyên dương x lớn nhất thỏa mãn:

// X không chứa chữ số 0 hoặc 1
// F(x) = F(a)

// – Bạn phân tích các giai thừa ra như sau. và đó chính là kết quả của bài toán. Nhưng đề bài yêu cầu là tìm số lớn nhất. nên bạn phải ưu tiên nhưng số lớn nhất đứng đầu.

//1! = 0! = 1

//2! = 2!

//3! = 3!

//4! = 3! * 2! * 2!

//5! = 5!

//6! = 5! * 3!

//7! = 7!

//8! = 7! * 2! * 2! * 2!

//9! = 7! * 3! * 3! * 2!