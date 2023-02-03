/*#include<bits/stdc++.h>
using namespace std;   //bài 2
int main(){
    int x;
    cin>>x;
    long long a,b,n,m;
    while(x--){
        cin>>a>>b;
        n=a;
        m=b;
        while(a!=b){
            if(a>b) a-=b;
            else b-=a;
        }
        cout<<n*m/a<<" "<<a<<endl;
    }
    return 0;
}*/
/*
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll bcnn(ll a,ll b){
    return a/__gcd(a,b)*b;
}
int main(){
    int t;
    cin>>t; 
    ll n, res = 2,x ,y;
    while(t--){
        cin>>n;
        if(n==1){
            cout<<1<<endl;
            continue;
        }
        for(size_t i=3;i<=n;i++){
            res = bcnn(res,i);
        }
        cout<<res<<endl; 
        res = 2;
    } 
    return 0;
}*/
/*
#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'       //bài 3
using namespace std;
typedef long long ll;
ll bcnn(ll a,ll b){
    return a/__gcd(a,b)*b;
}
int main(){
    fast_io;
    int t;
    cin>>t; 
    ll n, res = 2,x ,y;
    while(t--){
        cin>>n;
        if(n==1){
            cout<<1<<endl;
            continue;
        }
        for(size_t i=3;i<=n;i++){
            res = bcnn(res,i);
        }
        cout<<res<<endl; 
        res = 2;
    } 
    return 0;
}*/


/*
#include<iostream>
using namespace std;
int UCLN(int a,int b){
    if(a==b) return a;
    if(a>b)
        UCLN(a-b,b);
    else
        UCLN(a,b-a);
}
int main(){
    int t;
    cin>>t; 
    int n;
    int res = 2;
    while(t--){
        cin>>n;
        for(int i=3;i<=n;i++){
            res = (res*i/UCLN(res,i));
        }
        cout<<res<<endl; 
        res = 2;
    }
    return 0;
}*/
/*
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    long long n,i=2;
    while(t--){
        cin>>n;
        while(n>1){
          if(n % i == 0){
                cout<<i<<" ";
                n/=i;
                i--;
            }
            i+=1;
        }
        cout<<endl;
        i=2;
    }
    return 0;
}*/
/*
#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;
typedef long long ll;
ll bcnn(ll a,ll b){
    return a/__gcd(a,b)*b;
}
void solve(){
    ll n,res=2;
    cin>>n;
    if(n==1) {
        cout<<1<<endl;
        return;
    }
    for(size_t i=3;i<=n;i++) res=bcnn(res,i);
    cout<<res<<endl;
}
int main(){
    faster();
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}*/

/*
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;// PRIME 1
#define endl '\n'
int main(){
    ll n,i=2;
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        for(i=2;i<=sqrt(n);i++){
            if(n%i==0){
                cout<<i<<" ";
                n/=i;
                i-=1; 
           }  
        }
        cout<<n;
        cout<<endl;
    }
    return 0;
}*/

/*
#include<bits/stdc++.h>
using namespace std;//PRIME 2
typedef long long ll;
#define endl "\n"
int main(){
    int n;
    ll t,i;
    cin>>n;
    while(n--){
        cin>>t;
        for(i=2;i<=sqrt(t);i++){
            if(t%i==0){
                t/=i;
                i-=1;
            }
        }
        cout<<t;
        cout<<endl;
    }
    return 0;
}*/
/*
#include<bits/stdc++.h>
using namespace std;//PRIME 3
#define endl "\n"
bool fun(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int t ,n ,i , j;
    cin>>t;
    while(t--){
        cin>>n;
        for(i=2;i<=n;i++){
            if(fun(i))
            cout<<i<<" ";
        }
        cout<<endl;
    }
}*/
/*
#include<bits/stdc++.h>
using namespace std;//PRIME 9
int main(){
    int t, n,i, d=0;
    cin>>t;
    while(t--){
        cin>>n;
        for(i = 2;i <= sqrt(n); i++){
            d=0;
            while( n%i == 0 ){
                d+=1;
                n/=i;
            }
            if(n%i && d>0) cout<<i<<" "<<d<<" ";
        }
        if(n!=1) cout<<n<<" "<<1;
        cout<<endl;
    }
}*/
/*
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;//PRIME 12
#define endl "\n"
int main(){
    ll n, i,d=0;
    int a,k;
    cin>>a;
    while(a--){
        cin>>n;
        cin>>k;
        d=0;
        for(i=2;i<=sqrt(n);i++){
            while(n%i==0){
                n/=i;
                d+=1;
                if(k==d) {
                    cout<<i<<" ";
                    break;
                }
            }     
        }
        if(k>d&&n==1){
            cout<<-1;
        }
        if(k>d&&n>1) {
            d+=1;
            if(k>d) 
                cout<<-1; 
            if(k==d) 
                cout<<n;
        }
        cout<<endl;
    }
    return 0;
}*/


/*
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
bool fun(ll n){
    for(size_t i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    ll i, n, t ;
    cin>>t;
    while(t--){
        cin>>n;
        for(i=2;i<=n;i++){
            if(fun(i)&&i*i<n){
                cout<<i*i<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}*/

/*
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;   // PRIME 14
#define endl "\n"
int main(){
    ll N,i;
    int t;
    cin>>t;
    while(t--){
        cin>>N;
        bool check[N + 1];
        for ( i = 2; i <= N; i++) {
            check[i] = true;
        } 
        for ( i = 2; i <= N; i++) {
            if (check[i] == true) {
                for (int j = 2 * i; j <= N; j += i) {
                check[j] = false;
                }
            }
        }
        for ( i = 2; i <= N; i++) {
            if (check[i] == true&&i*i<N) {
            cout<<i*i<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
*/


// #include<bits/stdc++.h>
// #include<windows.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int vt;
//     cin>>vt;
//     int a[100];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     for(int i= n-1;i>=vt;i--){//i=4
//         a[i+1]=a[i];     //a[4+1]=a[4]=5
//     }                    //a[3+1]=a[3]=4
//     for(int i=0;i<n;i++){//a[2+1]=a[2]=3
//         Sleep(500);
//         cout<<a[i]<<" "; //a[1+1]=a[1]=2
//     }
// }

/*
#include<bits/stdc++.h>
using namespace std;//Địa chỉ email PTIT
#include<string>
#define space " "
#define N NULL
int main(){
    string a;
    getline(cin,a);
    int d=0;
    for(int i=0;i<a.length();i++){
        if(a[i]>='A'&&a[i]<='Z') a[i]+=32;
    }
    for(int i=a.length()-1;i>=0;i--){
        if(a[i]==' '){
           d = i;
           break; 
        }
    }
    for(int i=d+1;i<a.length();i++){
        cout<<a[i];
    }
    if(a[0]!=' ')
    cout<<a[0];
    for(int i=0;i<d;i++){
        if(a[i]==' '&&a[i+1]!=' '){
            cout<<a[i+1];
        }
    }
    cout<<"@ptit.edu.vn";
}*/
/*
#include<bits/stdc++.h>
#include<string>//Chuẩn hóa tên
using namespace std;
int main(){
    string a;
    int d;
    getline(cin,a);
    for(int i=a.length()-1;i>=0;i--){
        if(a[i]==' '){
            d = i;  
            break;
        }
    }
    for(int i=0;i<a.length();i++){
        if(a[i]>='A'&&a[i]<='Z') a[i]+=32;
    }
    for(int i=0;i<d;i++){
        if(a[i]==' '&&a[i+1]!=' ') a[i+1]-=32;
    }
    if(a[0]!=' ') a[0]-=32;
    for(int i=0;i<d;i++){
        if(a[i]==' '&&a[i+1]==' ') continue;
        cout<<a[i];
    }
    cout<<", ";
    for(int i=d+1;i<a.length();i++){
        a[i]-=32;
        cout<<a[i];
    }
    return 0;
}*/

/*
#include <bits/stdc++.h>
using namespace std;//Loại bỏ xâu con
 
int main(){
    string s;
    string xoa;
    getline(cin,s);
    getline(cin , xoa);
    string a[1000];
    int n = 0;
    for(int i = 0 ; i < s.size(); i++){
        if(s[i] == ' '){
            n++;
        }
        else{
            a[n] += s[i];
        }
 
    }
    for(int i = 0 ; i <= n ; i++){
        if(a[i] != xoa){
            cout << a[i] <<" ";
        }
    }
    return 0;
}*/
/*
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;   // PRIME 14
#define endl "\n"
bool iu(ll n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int N,i,m;
    int t,d;
    cin>>t;
    while(t--){
        d=0;
        cin>>m>>N;
        for ( i = m; i <= N; i++) {
            if (iu(i)&&i>1) {
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}*/
/*
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;   // PRIME 14
#define endl "\n"
int main(){
    ll N,i;
    int t,d;
    cin>>t;
    while(t--){
        cin>>N;
        bool check[N + 1];
        for ( i = 2; i <= N; i++) {
            check[i] = true;
        } 
        for ( i = 2; i <= N; i++) {
            if (check[i] == true) {
                for (int j = 2 * i; j <= N; j += i) {
                check[j] = false;
                }
            }
        }
        for ( i = 2; i <= N; i++) {
            if (check[i] == true&&i<sqrt(N)) {
                cout<<i*i<<" ";
            }
        }
        
        cout<<endl;
    }
    return 0;
}*/
/*
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n,d,j;
    int t;
    cin>>t;
    while(t--){
        d=1;
        cin>>n;
        for(j=2;j<=sqrt(n);j++){
            if(n%j==0){
                d=d+(j+n/j); 
            }//if((n==6)||(n==28)||(n==496)||(n==8128)||(n==33.550.336)||(n==8589869056)||(n==137.438.691.328)||(n==2305843008139952128))
        }
        if(d==n) cout<<1;
        else cout<<0;
        cout<<endl;
    }
    return 0;
}
*/
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,d;
//     cin>>n;
//     for(int i=1;i<n;i++){
//         d=0;
//         for(int j=1;j<=sqrt(i);j++){
//             if(i%j==0){
//                 d=d+(j+i/j);
//             }
//         }
//         if(d-i==i) cout<<i<<" ";
//     }
//         // cout<<endl;
// }

/*
#include<bits/stdc++.h>
using namespace std;
bool isPrime(long long n){
    if (n < 2) return false;
    for(int i = 2; i <= sqrt(n); ++i) {
        if (n%i==0)
            return false;
    }
    return true;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, check = 0;
        cin >> n;
        for(int i = 2; i < 20; ++i) {
            if(isPrime(i) && isPrime(pow(2, i)-1)){
                if(pow(2, 2*i)-pow(2, i) == 2*n){
                    cout << 1 << endl;
                    check = 1;
                    break;
                }
            }
        }
        if(!check) cout << 0 << endl;
    }
    return 0;
}*/
/*
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;//PRIME 17
bool mi(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    ll n,m;
    int t;
    cin>>t;
    while(t--){
        int d=0;
        cin>>m>>n;
        for(int i=sqrt(m);i<=sqrt(n);i++){
            if(mi(i)){
                d+=1;
            }
        }
        cout<<d-1;
        cout<<"\n";
        }
    return 0;
}*/

/*
#include<bits/stdc++.h>
using namespace std;//PRIME 18
int main(){
    int n,m,a,b,d=0;
    int t;  cin>>t;
    while(t--){
        d=0;
        cin>>m>>n>>a>>b;
        for(int i=m;i<=n;i++){
            if((i%a==0&&i%b)||(i%b==0&&i%a)||(i%a==0&&i%b==0)){
                d+=1;
            }
        }
        cout<<d<<"\n";
    }
}*/
/*
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;//PRIME 15
bool mi(ll n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    ll n,j,i;
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<1<<" ";
        for(i=1;i<=n;i++){
            if(i%2==0){
                cout<<2<<" ";
                continue;
            }
            for(j = 2;j <= i; j++){
                if(mi(i)) {
                    cout<<i<<" ";    
                    break;
                }     
                if(i%j==0&&mi(j)){
                    cout<<j<<" ";
                    break;
                }
            }
        }
        cout<<"\n";
    }
    return 0;
}*/
// #include<bits/stdc++.h>
// #include<string>
// using namespace std;
// #define endl "\n"
// int main(){
//     int t;
//     cin>>t;
//     string a,b;
//     int x,y;
//     while(t--){
//         cin>>a>>b;
//         x=a.length();
//         y=b.length();
//         if(x>y){
//             b.insert(0,x-y,'0');
//         }
//         else if(x<y){
//             a.insert(0,y-x,'0');
//         }
//         int s=0;
//         int d=0,z=0;
//         string c;
//         // for(int i=0;i<x;i++){
//         //     if(a[i]<b[i]) {swap(a,b); break;}
//         // }
//         for(int i = a.length()-1;i>=0;i--){
//             if(a[i]<b[i]) {
//                 d=(a[i]-48)+10;
//                 s = d - (b[i]-48)-z;
//                 z = d/10;
//             }
//             if(a[i]>=b[i]) {s = (a[i]-48) - (b[i]-48)-z;z=0;}
//             c.insert(0,1,s+48);
//         }
//         cout<<a<<" "<<b<<" "<<c;
//         cout<<endl;
//     }
//     return 0;
// }
/*
#include<bits/stdc++.h>
using namespace std;
long long n,a[100];//Re-arrang Array 1
void fun(){
    long long t;
    for(int i=0;i<n;i++) a[i]=-1;
    for(int i=0;i<n;i++){
        cin>>t; 
        if(t>=0&&t<n) a[t]=t;
    }
}
int main(){
    int x;
    long long t,i;
    cin>>x;
    while(x--){
        cin>>n;
        fun();
        for(i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<"\n";
    }
}*/
/*
#include<bits/stdc++.h>
using namespace std;
long long n,a[1000000];//Re-arrang Array 2
void fun(){
    long long t,x=0;
    memset(a,0,sizeof(a));
    for(int i=0;i<n;i++){
        cin>>t; 
        if(t!=0) {a[x]=t;x++;}
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
   
    cout<<"\n";
}
int main(){
    int x;
    long long t,i;
    cin>>x;
    while(x--){
        cin>>n;
        fun();
        
    }
}
*/
/*
#include<bits/stdc++.h>
using namespace std;//FIBONACCI 1
#define e 1000000007
int x, n;
void fun(){
    if(n==0||n==1)  {cout<<n; return;}
    int a,d,b;
    a=0;b=1;    
    for(int i=2;i<=n;i++){
        d=(a+b)%e;
        a=b;
        b=d;
    }
    cout<<d;
}
int main(){
    cin>>x;
    while(x--){
        cin>>n;
        fun();
        cout<<"\n";
    }
}
// */
// #include<bits/stdc++.h>
// #include<string>
// using namespace std;
// typedef long long ll;
// int m,s;
// int  chia(ll n){
//     ll d,x=0;
//     while(n){
//         d=n%10;
//         x+=d;
//         n/=10;
//     }
//     return x;
// }
// void fun(){
//     for(ll i=pow(10,m-1);i<pow(10,m);i++){
//         if(chia(i)==s) {
//             cout<<i<<" ";
//             break;
//         }
//     }
//     for(ll i=pow(10,m)-1;i>=pow(10,m-1);i--){
//         if(chia(i)==s) {
//             cout<<i;    
//         break;
//         }
//     }
//     cout<<endl;
// }
// int main(){
//     cin>>m>>s;
//     fun();
//     return 0;
// }
/*
#include<bits/stdc++.h>
using namespace std;//Order Statistics 1
int n,k,a[100000];
void nhap(){
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}
void fun(){
    int x;
    for(int i=0;i<n-1;i++){
        x=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[x]) x=j;
        }
        if(x!=i) swap(a[x],a[i]);
    }
}
int main(){ 
    int t;cin>>t;
    while(t--){
        cin>>n>>k;
        nhap();
        fun();
        cout<<a[k-1];
        cout<<endl;
    }
}*/
/*
#include<bits/stdc++.h>
using namespace std;
#define e 1000000007
long long n;
// function fibonacci(num, memo) {
//   memo = memo || {};

//   if (memo[num]) return memo[num];
//   if (num <= 1) return num;

//   return memo[num] = fibonacci(num - 1, memo) + fibonacci(num - 2, memo);
// }

void fun(){
    long long d=0,f=1,x;
    if(n==0||n==1) {cout<<"YES"; return;}
    for(long long i=2;i<=n;i++){
        x=(d+f)%e;
        d=f;
        f=x;
        if(d==n) {cout<<"YES"; return;}
    }
    cout<<"NO";
}
int main(){
    int t; cin>>t;
    while(t--){
        cin>>n;
        fun();
        cout<<"\n";
    }
    return 0;
}*/
//(a ^ b) % M = ((a % M) ^ b) % m .
/*
#include <iostream>
using namespace std;
#define mo 1000000007;
long long MO_1(long long a,long long b, long long c){
    long long sum=1;
    for(int i=1 ; i<=b ; i++){
        sum*=a;
        sum%=c;
    }
    return sum;
}
int main() {
    int t; cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        cout<<MO_1(a,b,c)<<endl;
    }
*/

/*
#include<bits/stdc++.h>
using namespace std;// modulo 2
typedef long long ll;
int fun(ll a, ll b,ll d){
    ll s=1;
    s=(a*b)%d;
    return s;
}
int main(){
    int t,e=0;
    cin>>t;
    long long n,m,y,o;
    long long d;
    while(t--){
        cin>>n>>m;
        e=0;
        for(int i = 0;i<=m-1; i++){
            if(fun(i,n,m)==1) {
                e=1;
                cout<<i;
                break;
            }
        }
        if(e==0) cout<<-1;
        cout<<endl;
    }
    return 0;
}*/
/*
#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;//Order Statistics 2
ll n,a[10000];
void nhap(){
    for(size_t i=0;i<n;i++){
        cin>>a[i];
    }
}
void selectionsort(){
    int index;
    for(size_t i=0;i<n-1;i++){
        index=i;
        for(size_t j=i+1;j<n;j++){
            if(a[j]<a[index]) index=j;
        }
        if(index!=i) swap(a[i],a[index]);
    }
}
void xuat(){
    cout<<a[n-1];
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        nhap();
        selectionsort();
        xuat();
        cout<<endl;
    }
}*/
/*
#include<bits/stdc++.h>
using namespace std;
int n,a[100];//Sorting 1
void input(){

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}
void selectionsort(){
    int index;
    for(int i=0;i<n-1;i++){
        index=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[index]) index=j;
        }
        if(index!=i) swap(a[i],a[index]);
    }
}
void output(){
    for(int i = n-1, j=0; i >= n/2 , j < n/2; i--, j++){
        cout<<a[i]<<" "<<a[j]<<" ";        
    }
    if(n%2) cout<<a[n/2];
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        input();
        selectionsort();
        output();
        
    }
    
}*/
/*
#include<bits/stdc++.h>
using namespace std;
int n,a[100000];//Sorting 6
void input(){
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}
void selectionsort(){
    int index;
    for(int i=0;i<n-1;i++){
        index=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[index]) index=j;
        }
        if(index!=i) swap(a[i],a[index]);
    }
}
void output(){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        input();
        selectionsort();
        output();
    }
}*/
/*
#include<bits/stdc++.h>
using namespace std;
int n,a[100000];
void input(){
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}
void selectionsort(){
    int index;
    for(int i=0;i<n-1;i++){
        index=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[index]) index=j;
        }
        if(index!=i) swap(a[i],a[index]);
    }
    cout<<a[n-1];
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        input();
        selectionsort();
        
    }
}*/
/*
#include<bits/stdc++.h> 
using namespace std; 
int a[10000],b[10000]; 
void nhap(int a[],int n){ 
    for(int i=0;i<n;i++) cin>>a[i]; 
} 
int maxPathSum(int ar1[], int ar2[], int m, int n) {
    int i = 0, j = 0; 
    int result = 0, sum1 = 0, sum2 = 0; 
    while (i < m && j < n) {
         if (ar1[i] < ar2[j]) {
              sum1 += ar1[i]; i++; 
        } else if (ar1[i] > ar2[j]) {
         sum2 += ar2[j]; j++; 
         } else { 
            result += max(sum1, sum2); 
            sum1 = 0, sum2 = 0; 
            while (i < m && j < n && ar1[i] == ar2[j]) {
                 result = result + ar1[i]; i++; j++; 
                 } 
                 } 
                 } while (i < m) {
                      sum1 += ar1[i]; i++; 
                      } while (j < n) { 
                          sum2 += ar2[j]; j++; 
                          } 
    result += max(sum1, sum2); 
    return result; 
} 
int main(){ 
    int t; 
    cin>>t; while(t--){ 
        int n,m; cin>>n>>m; 
        nhap(a,n); 
        nhap(b,m); 
        cout<<maxPathSum(a,b,n,m)<<endl; 
    } 
    return 0; 
}*/
/*
#include<bits/stdc++.h> 
using namespace std; 
main(){
    int t; cin>>t; 
    while(t--){ 
        int n; cin>>n; 
        int a[n]; 
        for(int i=0;i<n;i++) 
        cin>>a[i]; 
        int x=1; 
        while(1){ 
            int stop=1; 
            for(int i=0;i<n;i++){ 
                if(a[i]==x){ 
                    stop=0; break; 
                } 
            } 
            if(stop==0) 
            x++; 
            else break; 
        } 
        cout<<x<<endl; 
    } 
}*/
/*
#include<bits/stdc++.h>
using namespace std;
int n,k,a[100000];//Re-arrang Array 14
void input(){
    for(int i=0;i<n*k;i++){
        cin>>a[i];
    }
}
void selectionsort(){
    int index;
    for(int i=0;i<n*k-1;i++){
        index=i;
        for(int j=i+1;j<n*k;j++){
            if(a[j]<a[index]) index=j;
        }
        if(index!=i) swap(a[i],a[index]);
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        input();
        selectionsort();
        for(int i=0;i<n*k;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/
/*
#include<bits/stdc++.h>
using namespace std;
int n,a[100000];//Order Statistics 12
void fun(){
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}
int main(){
    int t,x,stop;
    cin>>t;
    while(t--){
        cin>>n;
        fun();
        x=1;
        while(1){
            stop=1;
            for(int i=0;i<n;i++){
                if(a[i]==x){
                    stop=0; break;
                }
            }
            if(stop==0) x++;
            else break;
        }
        cout<<x<<"\n";

    }
}*/
/*
#include<bits/stdc++.h>
using namespace std;//Order Statistics 3
int n,k,a[10000];
void input(){
    for(int i=0;i<n*n;i++){
        cin>>a[i];
    }
}
void selectionsort(){
    int index;
    for(int i=0;i<n*n-1;i++){
        index=i;
        for(int j=i+1;j<n*n;j++){
            if(a[j]<a[index]) index=j;
        }
        if(index!=i) swap(a[i],a[index]);
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        input();
        selectionsort();
        cout<<a[k-1];
        cout<<"\n";
    }
    return 0;
}*/
/*
#include<bits/stdc++.h>
#include<string>
using namespace std;
string n;
bool mi(){
    int a = n.length()-1;
    int d = (n[a]-48)*10+(n[a-1]-48);
    if(d==68) return true;
    return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        if(mi()==true) cout<<1;
        else cout<<0;
        cout<<endl;
    }
}*/
/*
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
int mi(){
    int d=0;
    while(n){
        d=n%10+d;
        n/=10;
    }
    int s=0,S=0;
    if(d>=10){
        while(d){
            s=d%10+s;
            d/=10;
        }
        if(s>=10){
            while(s){
            S=s%10+S;
            s/=10;
            }
            return S;
        }
        return s;
    }
    return d;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
       cout<<mi();
       cout<<endl;
    }
}*/
/*
#include<bits/stdc++.h>
using namespace std;//Matrix 6
int n,a[100][100];
void input(){
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>a[i][j];
}
void output() {
    for(int i=0;i<n;i++){ 
        if(i==0||i==n-1) 
            for(int j=0;j<n;j++) 
                cout<<a[i][j]<<" ";
        else for(int j=0;j<n;j++)
                if(j==0||j==n-1) 
                    cout<<a[i][j]<<" ";
                    else cout<<"  ";
        
        cout<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        input();
        output();
        cout<<endl;
   
    }
}*/
/*
#include<bits/stdc++.h>
using namespace std;
int n,a[1000000],m;//Searching 1
void input(){
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}
void mi(){
   for(int i=0;i<n;i++){
        if(a[i]==m) {
            cout<<i+1;
            return;
        }
    }
    cout<<-1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        input();
        mi();
        cout<<"\n";
    }
}*/
/*
#include<bits/stdc++.h>
using namespace std;
int n,a[1000000],m;//Searching 2
void input(){
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}
void mi(){
   for(int i=0;i<n;i++){
        if(a[i]==m) {
            cout<<1;
            return;
        }
    }
    cout<<-1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        input();
        mi();
        cout<<"\n";
    }
}*/
/*
#include<bits/stdc++.h>
using namespace std;
int n,a[1000000];//Searching 3
void input(){
    for(int i=0;i<n-1;i++){
        cin>>a[i];
    }
}
int main(){
    int t,x,stop;
    cin>>t;
    while(t--){
        cin>>n;
        input();
        x=1;
        while(1){
            stop=1;
            for(int i=0;i<n-1;i++){
                if(a[i]==x){
                    stop=0;break;
                }
            }
            if(stop==0) x++;
            else break;
        }
        cout<<x<<"\n";
    }
}*/
/*
#include<bits/stdc++.h>
using namespace std;
int n,a[1000000],x;//Searching 4
void input(){
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}
void output(){
    for(int i=0;i<n;i++){
        if(a[i]==x){ cout<<i+1; return;}
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>x;
        input();
        output();
        cout<<endl;
    }
}*/
/*
#include<bits/stdc++.h>
using namespace std;//Searching 5
int n,a[1000000];
void i(){
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}
void selectionsort(){
    int index;
    for(int i=0;i<n-1;i++){
        index=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[index]) index=j;
        }
        if(index!=i) swap(a[i],a[index]);
    }
    if(a[0]!=a[1])
    cout<<a[0]<<" "<<a[1];
    else cout<<-1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        i();
        selectionsort();
        cout<<endl;
    }
}*/
/*
#include<bits/stdc++.h>
using namespace std;
int n,a[100000],k,b[100000];
void input(){//sorting 2
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}
void output(){
    int x=0;
    for(int i=0;i<n;i++){
        x=k-a[i];
        b[i] = abs(x);
    }
}
void selectionsort(){
    int index;
    for(int i=0;i<n-1;i++){
        index=i;
        for(int j=i+1;j<n;j++){
            if(b[j]<b[index]) index=j;
        }
        if(index!=i) swap(b[i],b[index]);
    }
    int x;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            x=a[j]-k;
            if(abs(x)==b[i]){
                cout<<a[j]<<" ";
                a[j]=-1000000;
            }
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        input();
        output();
        selectionsort();
        cout<<endl;
    }
}*/
/*
#include<bits/stdc++.h>
using namespace std;
int n,a[100],k;//sorting 9

void input(){
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}
void em(){
    int x,d=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            x=a[i]+a[j];
            if(x==k){
                d++;
            }
        }
    }
    cout<<d;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        input();
        em();
        cout<<endl;
    }
    return 0;
}*/
/*
#include<bits/stdc++.h>
using namespace std;//Sorting 12
void selectionsort(long long  a[1000000],long long n){
    int index;
    for(int i=0;i<n-1;i++){
        index=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[index]) index=j;
        }
        if(index!=i) swap(a[i],a[index]);
    }
}
long long t,n,m,a[1000000],b[1000000];
int main(){
    cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=0;i<n;i++){
            cin>>a[i];
        } 
        for(int i=0;i<m;i++){
            cin>>b[i];
        }
        selectionsort(a,n);
        selectionsort(b,m);
        cout<<a[n-1]*b[0]<<"\n";
    }
    return 0;
}*/
/*
#include<bits/stdc++.h>
using namespace std;
long long n,m,a[1000000];//Sorting 14
void input(){
    for(int i=0;i<n+m;i++){
        cin>>a[i];
    }
}
void selectionsort(){
    int index;
    for(int i=0;i<n+m-1;i++){
        index=i;
        for(int j=i+1;j<n+m;j++){
            if(a[j]<a[index]) index=j;
        }
        if(index!=i) swap(a[i],a[index]);
    }
    for(int i=0;i<n+m;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        input();
        selectionsort();
    }
}*/
/*
#include<bits/stdc++.h>
using namespace std;
int n,a[100000];//Sorting 14
void selectionsort(){
    int index;
    for(int i=0;i<n-1;i++){
        index=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[index]) index=j;
        }
        if(index!=i) swap(a[i],a[index]);
    }
}

int main(){
    int t,x,d=0,y,b[100000];
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        selectionsort();
        d=0;
        for(int i=1;i<=a[n-1];i++){
            b[i]=-1;
        }
        for(int i=0;i<=a[n-1];i++){
            b[a[i]]=a[i];
        }
        // for(int i=0;i<=a[n-1];i++){
        //     cout<<b[i]<<" ";
        // }
        // cout<<endl;
        for(int i=a[0];i<=a[n-1];i++){
            if(b[i]==-1) d++;
        }
        cout<<d<<"\n";
    }
}*/
/*
#include<bits/stdc++.h>
using namespace std;
int n,a[1000],k;//Searching 7
void input(){
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}
void selectionsort(){
    int index;
    for(int i=0;i<n-1;i++){
        index=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[index]) index=j;
        }
        if(index!=i) swap(a[i],a[index]);
    }
    
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        input();
        selectionsort();
        for(int i=n-1;i>=n-k;i--){
            cout<<a[i]<<" ";
        }
        cout<<"\n";
    }
}*/
#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;
typedef long long ll;

ll bcnn(ll a,ll b){
    return a/__gcd(a,b)*b;
}
void solve(){
    ll n,res=2;
    cin>>n;
    if(n==1) {
        cout<<1<<endl;
        return;
    }
    for(size_t i=3;i<=n;i++) res=bcnn(res,i);
    cout<<res<<endl;
}
int main(){
    faster();
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}