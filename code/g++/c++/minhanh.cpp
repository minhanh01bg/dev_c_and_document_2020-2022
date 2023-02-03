#include<bits/stdc++.h>
using namespace std;//sorting 15
int main() {
    int t;
    cin>>t;
    while(t--) {
        long n,k;
        cin>>n>>k;
        long a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        map<int,int>mp;
        for(long i=0;i<n;i++){
            mp[a[i]]++;
        }
        sort(a,a+n);
        long dem=0;
        for(long i=0;i<n;i++){
            for(long j=0;j<i;j++){
                if(a[i]-a[j]<k) dem++;
            }
        }
        map<int,int>::iterator it;
        for(it = mp.begin();it!=mp.end();it++ ){
            if(it->second>2){
                while(it->second>1){
                    dem--;
                    it->second--;
                }
            }
        }
        cout<<dem<<endl;
    }
}
/*#include<bits/stdc++.h>
using namespace std;//	Re-arrang Array 7
int mmi(int x,int y){
    int d=x,m=1,i=y;
    while(i){
        d*=10;
        i/=10;
    }
    while(y){
        d = d+(y%10)*m;
        m*=10;
        y/=10;
    }
    return d;
}
int mmmi(int x,int y){
    return mmi(x,y)>mmi(y,x) ? 1:0;
}
void mi(int a[],int n){
    sort(a,a+n,mmmi);
    for(int i=0;i<n;i++) cout<<a[i];
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    int n;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        mi(a,n);
    }
    return 0;
}*/

/*
#include<bits/stdc++.h>
using namespace std;//prime 8
int mi(int n,int p){
    int x=0,e=0;
    // Calculate x = n/p + n/(p^2) + n/(p^3) + .... 
    while(n){
        n/=p;
        x+=n;
    }
    return x;
}
int main(){
    int t;  cin>>t;
    int n,p;
    while(t--){
        cin>>n>>p;
        cout<<mi(n,p)<<endl;
    }
    return 0;
}*/
/*
#include<bits/stdc++.h>
using namespace std;//prime 8
int mi(int n,int p){
    int x=0,e=0;
    if(n<p) return 0;
    else
    for(int i=1;i<=n;i++){
        if(i%p==0){
            e=i;
            while(e%p==0){
                x++;
                e/=p;
            }
        }
    }
    return x;
}
int main(){
    int t;  cin>>t;
    int n,p;
    while(t--){
        cin>>n>>p;
        cout<<mi(n,p)<<endl;
    }
    return 0;
}*/
/*
#include<bits/stdc++.h>

using namespace std;
string mi(string s){
    int a[26]={0};
    string temp="";
    int d=0,e=1;
    for(int i = 0 ;i < s.length(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z')
            a[s[i]-'A']++;
        else {
            d = (s[i]-'0')+d;
            e=0;
        }
    }
    char ch;
    for(int i=0;i<26;i++){
        ch='A'+i;
        while(a[i]-->0){
            temp+=ch;
        }
    }
    if(e==0)
    temp+=to_string(d);
    return temp;
}
int main(){
    int t;
    cin>>t;
    string n;
    cin.ignore();
    while(t--){
        getline(cin,n);
        cout<<mi(n)<<endl;
    }
}*/
/*
#include<bits/stdc++.h>
using namespace std;
void mi(string n){
    string temp="";
    int a[10000]={0}, x = 0;
    for(char ch: n){
        if(isdigit(ch)){
            temp+=ch;
        }
        else {
            a[x] = atoi(temp.c_str());
            temp="";
            x++;   
        }
    }
    a[x] = atoi(temp.c_str());
    int d,k=max(a[0],a[1]);
    for(int i=2;i<x+1;i++){
        d=max(k,a[i]);
        k=d;
    }
    cout<<d<<endl;
}
int main(){
    int t;  cin>>t;
    string n;
    cin.ignore();
    while(t--){
        getline(cin,n);
        mi(n);
    }
}*/
/*
#include<bits/stdc++.h>
using namespace std;//string 8
void mmi(string n){
    int sum=0;
    string temp="";
    for(char ch: n){
        if(isdigit(ch)){
            temp+=ch;
        }
        else{
            sum+= atoi(temp.c_str());
            temp="";
        }
    }
    if(temp!="")
    sum+=atoi(temp.c_str());
    cout<<sum<<endl;
}
int main(){
    int t;
    cin>>t;
    string n; 
    cin.ignore();
    while(t--){
        getline(cin,n);
        mmi(n);
    }
}*/

/*
#include<bits/stdc++.h>
using namespace std;//modulo 6
typedef unsigned long long ll;
ll mmi(ll a, ll b ,ll c){
    ll t;
    if(b==1) t=a;
    else
    { t = mmi(a,b/2,c);
     t=t*t%c;
    if(b%2==1) t= a*t%c;}
    return t;
}
ll mi(string a,ll M){
    ll res=0;
    for(int i=0;i<a.length();i++){
        res = res*10 + int (a[i]-'0');
        res%=M; 
    }
    return res;
}
int main(){
    int t;
    cin>>t;
    string a;
    ll b,M;
    while(t--){
        cin>>a>>b>>M;
        cout<<mmi(mi(a,M),b,M)<<endl;
    }
}*/
/*
#include<bits/stdc++.h>
#include<string>
using namespace std;
bool mi(string n, int k){
    if(n.length() < 26) return false;
    int x[26]={-1};
    for(int i = 0;i < n.length(); i++){
        x[n[i]-'a']=true;
    }
    int count=0;
    for(int i = 0;i < 26; i++){
        if(!x[i]) count++;
        if(count>k) return false;
    }
    return true;
}
int main(){
    int t,k;
    string n;
    cin>>t;
    t-=1;
mmi:
        cin.ignore();
        getline(cin,n); cin>>k;
        mi(n,k) ? cout<<1 : cout<<0;
        cout<<endl;
    while(t--){
        goto mmi;
    }
}*/
/*#include<bits/stdc++.h>
using namespace std;
int mi(int arr[], int n)
{
    int maxDiff = -1;
    int i, j;
    for (i = 0; i < n; ++i) {
        for (j = n - 1; j > i; --j) {
            if (arr[j] >= arr[i] && maxDiff < (j - i))
                maxDiff = j - i;
        }
    }
    return maxDiff;
}
 
int main(){
    int t;
    cin>>t;
    int n;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        cout<<mi(a,n)<<endl;
    }
}*/
// #include <bits/stdc++.h> 
// #define R 3 
// #define C 4
// using namespace std; 
// void rotatematrix(int m, int n, int mat[R][C]) { 
//     int row = 0, col = 0; 
//     int prev, curr; 
//     while (row < m && col < n) { 
  
//         if (row + 1 == m || col + 1 == n) 
//             break;
//         prev = mat[row + 1][col]; 
//         for (int i = col; i < n; i++) 
//         { 
//             curr = mat[row][i]; 
//             mat[row][i] = prev; 
//             prev = curr; 
//         } 
//         row++; 
//         for (int i = row; i < m; i++) 
//         { 
//             curr = mat[i][n-1]; 
//             mat[i][n-1] = prev; 
//             prev = curr; 
//         } 
//         n--; 
//         if (row < m) 
//         { 
//             for (int i = n-1; i >= col; i--) 
//             { 
//                 curr = mat[m-1][i]; 
//                 mat[m-1][i] = prev; 
//                 prev = curr; 
//             } 
//         } 
//         m--; 
//         if (col < n) 
//         { 
//             for (int i = m-1; i >= row; i--) 
//             { 
//                 curr = mat[i][col]; 
//                 mat[i][col] = prev; 
//                 prev = curr; 
//             } 
//         } 
//         col++; 
//     } 
//     for (int i=0; i<R; i++) 
//     { 
//         for (int j=0; j<C; j++) 
//           cout << mat[i][j] << " "; 
//         cout << endl; 
//     } 
// } 
// int main() { 
//     int a[R][C] = { {1,  2,  3,  4}, 
//         {5,  6,  7,  8}, 
//         {9,  10, 11, 12} }; 
//     rotatematrix(R, C, a); 
//     return 0; 
// } 
/*
#include<bits/stdc++.h>
using namespace std;//sorting 15
int main() {
    int t;
    cin>>t;
    while(t--) {
        long n,k;
        cin>>n>>k;
        long a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        map<int,int>mp;
        for(long i=0;i<n;i++){
            mp[a[i]]++;
        }
        sort(a,a+n);
        long dem=0;
        for(long i=0;i<n;i++){
            for(long j=0;j<i;j++){
                if(a[i]-a[j]<k) dem++;
            }
        }
        map<int,int>::iterator it;
        for(it = mp.begin();it!=mp.end();it++ ){
            if(it->second>2){
                while(it->second>1){
                    dem--;
                    it->second--;
                }
            }
        }
        cout<<dem<<endl;
    }
}*/
/*#include<bits/stdc++.h>
using namespace std;
int n,x[100];
void xuat(){
    for(int i=1;i<=n;i++) cout<<x[i];
    cout<<" "; 
}
void Try(int i){
    for(int j=0;j<=1;j++){
        x[i]=j;
        if(i==n) xuat();
        else Try(i+1);
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        Try(1);   
        cout<<endl;
    }
}
/*
#include<bits/stdc++.h>
using namespace std;
void Try(int n){
    if(n==0) return;
    cout<<n<<endl;
    Try(n-1);
    cout<<n<<"----------"<<endl;
}
int main(){
    int n;
    cin>>n;
    Try(n);
    return 0;
}*/

/*#include<bits/stdc++.h> 
using namespace std; //string 6
typedef unsigned long long ll;
ll replaceDig(ll x, ll from, ll to) 
{
    ll result = 0; 
    ll multiply = 1; 
  
    while (x > 0) 
    { 
        ll reminder = x % 10; 
        if (reminder == from) 
          result = result + to * multiply; 
        else
            result = result + reminder * multiply; 
        multiply *= 10; 
        x = x / 10; 
    } 
    return result; 
} 
void calculateMinMaxSum(ll x1, ll x2) 
{ 
    ll minSum = replaceDig(x1, 6, 5) + replaceDig(x2, 6, 5); 
  
    ll maxSum = replaceDig(x1, 5, 6) + replaceDig(x2, 5, 6); 
    cout<< minSum<<" "; 
    cout<< maxSum; 
    cout<<endl;
}  
int main() 
{ 
    int t;
    cin>>t;
    ll x1 , x2 ; 
    while(t--){
        cin>>x1>>x2;    
        calculateMinMaxSum(x1, x2); 
    }
    return 0; 
} 
*/
/*
#include <bits/stdc++.h> 
using namespace std; 
  //searching 12 geeksforgeeks
// The function assumes that the array is sorted  
bool findPair(int arr[], int size, int n)  
{  
    // Initialize positions of two elements  
    int i = 0;  
    int j = 1;  
  
    // Search for a pair  
    while (i < size && j < size)  
    {  
        if (i != j && arr[j] - arr[i] == n)  
        {  
            cout << "Pair Found: (" << arr[i] << 
                        ", " << arr[j] << ")";  
            return true;  
        }  
        else if (arr[j]-arr[i] < n)  
            j++;  
        else
            i++;  
    }  
  
    cout << "No such pair";  
    return false;  
}  
  
// Driver program to test above function  
int main()  
{  
    int arr[] = {1, 8, 30, 40, 100};  
    int size = sizeof(arr)/sizeof(arr[0]);  
    int n = 60;  
    findPair(arr, size, n);  
    return 0;  
}  */
/*#include<bits/stdc++.h>
using namespace std;//searching 12
void mi(int n, int a[], int k){
    int x=0;
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(binary_search(a,a+n,k+a[i])) {
            cout<<1<<endl;
            x=1;
            break;
        }
    }
    if(x==0) cout<<-1<<endl;
}
int main(){
    int t;
    cin>>t;
    int n,k;
    while(t--){
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        mi(n,a,k);   
    }
}*/
/*
#include <bits/stdc++.h> 
using namespace std; //modulo 9
unsigned long long power(unsigned long long x, int y, int p) { 
    /*x = 10, y = 3, p = 1e9*/
    /*unsigned long long res = 1;
    x = x % p;//x=10
    while (y > 0) { 
        // nếu y là lẻ nhân x với res
        if (y & 1)  res = (res * x) % p; //res = 10
        y = y >> 1; // y = y/2 = 1
        x = (x * x) % p; //x=100;
    } 
    return res; 
} /*
// Returns n^(-1) mod p 
unsigned long long modInverse(unsigned long long n, int p){ 
    return power(n, p - 2, p); 
} // Returns nCr % p sử dụng định lý nhỏ femat. 
unsigned long long nCrModPFermat(unsigned long long n, int r, int p) { 
    if (r == 0)  return 1; 
    // Điền vào mảng giai thừa để 
    //chúng ta có thể tìm thấy tất cả các giai thừa của r, n and n-r
    unsigned long long fac[n + 1];  fac[0] = 1; 
    for (int i = 1; i <= n; i++)  fac[i] = (fac[i - 1] * i) % p; 
    return (fac[n] * modInverse(fac[r], p) % p * modInverse(fac[n - r], p) % p) % p; 
} 
int main() {
    int t; cin>>t;// p phải là 1 số lớn hơn n.
    while(t--) {
        int n, r, p = 1000000007;
        cin>>n>>r; 
        cout << nCrModPFermat(n, r, p) <<endl; 
    }
    return 0; 
}*/
/*
#include<bits/stdc++.h>
using namespace std;
int n,stop=0,a[20];
void khoi(){
    for(int i=1;i<=n;i++) a[i]=i;
}
void sinh(){
    int i=n-1;
    while(i>0 && a[i] > a[i+1]) i--;
    if(i == 0) stop = 1;
    else{
        int k=n;
        while(a[i]>a[k]) k--;
        swap(a[k],a[i]);
        int c = n, r = i + 1;
        while(r < c){
            swap(a[c],a[r]);
            r++; c--;
        } 
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        khoi();
        stop=0;
        while(stop==0){
            for(int i=1;i<=n;i++) cout<<a[i];
            cout<<" ";
            sinh();
        }
        cout<<endl;
    }
    return 0;
}*/


/*
#include <bits/stdc++.h> 
using namespace std; 
void findCommon(int ar1[], int ar2[], int ar3[], int n1, int n2, int n3) { 
    int i = 0, j = 0, k = 0; int x=0;
    while (i < n1 && j < n2 && k < n3) 
    { 
         if (ar1[i] == ar2[j] && ar2[j] == ar3[k]) 
         {   cout << ar1[i] << " ";x=1;   i++; j++; k++; } 
         else if (ar1[i] < ar2[j]) 
             i++; 
         else if (ar2[j] < ar3[k]) 
             j++; 
         else
             k++; 
    } 
    if(x==0) cout<<-1<<endl;
    else cout<<endl;
} 
int main() {
    int n1,n2,n3; 
    int t;
    cin>>t;
    while(t--){
        cin>>n1>>n2>>n3;
        int ar1[n1],ar2[n2],ar3[n3]; 
        for(int i=0;i<n1;i++) cin>>ar1[i];
        for(int i=0;i<n2;i++) cin>>ar2[i];
        for(int i=0;i<n3;i++) cin>>ar3[i];
        findCommon(ar1, ar2, ar3, n1, n2, n3); 
    }
    return 0; 
} */
/*---------------------------------------------------*/

/*
#include<bits/stdc++.h>
#include<set>
using namespace std;
void mi(int n,int a[10000]){
    int d;
    set<int> minhanh;
    for(int i=0;i<n;i++){
        minhanh.insert(a[i]);
    }
    for(auto i:minhanh){
        cout<<i<<" ";
    }
    cout<<endl;
}
int main(){
    int t;
    int d;
    int b[10000], x = 0;
    cin>>t;
    long long a[100],n;
    while(t--){
        cin>>n;
        x=0;
        for(int i=0;i<n;i++){
            cin>>a[i];  
            while(a[i]){
                d = a[i]%10;
                b[x] = d;
                x++;
                a[i] /= 10;
            }
        } 
        mi(x,b);
    }
}*/