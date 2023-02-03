/*
#include <iostream> //modulo 10
using namespace std; 
typedef long long ll;
int p=1e9+7;
ll horner(int poly[], int n, int x) 
{ 
    ll result = poly[0];  
    for (int i=1; i<n; i++) 
        result = (result*x + poly[i])%p; 
    return result; 
} 
  
int main() 
{ 
    int t;
    cin>>t;
    while(t--){
        int n, x;
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        cout<<horner(a,n,x)<<endl;
    } 
}
*/
/*
//modulo9 c1:
#include <bits/stdc++.h> 
using namespace std; 
  
int nCrModp(int n, int r, int p) 
{ 
   
    if (r > n - r) 
        r = n - r; 
  
    int C[r + 1]; 
    memset(C, 0, sizeof(C)); 
  
    C[0] = 1;
    for (int i = 1; i <= n; i++) { 
  
        for (int j = min(i, r); j > 0; j--) {
           
            C[j] = (C[j] + C[j - 1]) % p; 
            // cout<<C[j]<<" ";
        }
    } 
    return C[r]; 
} 
  

int main() 
{   int t;
    cin>>t;
    while(t--){
        int n , r , p = 1e9+7;
        cin >> n >> r; 
        cout<<endl << nCrModp(n, r, p); 
    }
    return 0; 
}
//modulo9 c2
#include <bits/stdc++.h>
using namespace std;
 

unsigned long long power(unsigned long long x, 
                                  int y, int p)
{
    unsigned long long res = 1; 
 
    x = x % p; 
 
    while (y > 0) 
    {
     
        if (y & 1)
            res = (res * x) % p;
 
        y = y >> 1; 
        x = (x * x) % p;
    }
    return res;
}
unsigned long long modInverse(unsigned long long n,  
                                            int p)
{
    return power(n, p - 2, p);
}
 
unsigned long long nCrModPFermat(unsigned long long n,
                                 int r, int p)
{
    if (n < r)
        return 0;
    if (r == 0)
        return 1;
 
    unsigned long long fac[n + 1];
    fac[0] = 1;
    for (int i = 1; i <= n; i++)
        fac[i] = (fac[i - 1] * i) % p;
 
    return (fac[n] * modInverse(fac[r], p) % p
            * modInverse(fac[n - r], p) % p)
           % p;
}
int main()
{
     int t;
    cin>>t;
    while(t--){
        int n , r , p = 1e9+7;
        cin >> n >> r; 
        cout << nCrModPFermat(n, r, p) << endl;
    }
    return 0;
}
// =modulo 9 c3
#include<bits/stdc++.h> 
using namespace std; 
  
int nCrModpDP(int n, int r, int p) 
{ 
    int C[r+1]; 
    memset(C, 0, sizeof(C)); 
  
    C[0] = 1; 
  
    for (int i = 1; i <= n; i++) 
    { 
        for (int j = min(i, r); j > 0; j--) 
  
            C[j] = (C[j] + C[j-1])%p; 
    } 
    return C[r]; 
} 
  
int nCrModpLucas(int n, int r, int p) 
{ 
   if (r==0) 
      return 1; 
  
   int ni = n%p, ri = r%p; 
 
   return (nCrModpLucas(n/p, r/p, p) * 
           nCrModpDP(ni, ri, p)) % p;  
} 

int main() 
{   
    int t;
    cin>>t;
    while(t--){
    int n , r , p = 1e9+7;
    cin >> n >> r; 
    cout << nCrModpLucas(n, r, p); 
    cout << endl;
    }
    return 0; 
}
*/
/*
#include<bits/stdc++.h>
using namespace std;//modulo 7
int mi(int a[],int n){
    int d=0;
    sort(a,a+n);
    d=a[n-1]-a[0];
    int b[100],z=0;
    for(int i=1;i<=sqrt(d);i++){
        if(d%i==0){
            if(d/i==i){
                b[z++]=i;
                
            }
            else {
                b[z++]=i;
                b[z++]=d/i;
            }
        }
    }
    int count=0;
    for(int i=0;i<z;i++){
        int x=a[0]%b[i],y;
        for(int j=1;j<n;j++){
            y=a[j]%b[i];
            if(y!=x) {
                x=-1;
                break;
            }
        }
        if(x!=-1) count++;
    }
    return count;
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
}
*/

/*
#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;//modulo 6
ll mmi(ll a, ll b, ll c){
    ll t;
    if(b==1) t=a;
    else{
        t=mmi(a,b/2,c);
        t=t*t%c;
        if(b%2) t=a*t%c;
    } 
    return t;
}
ll mi(string n,ll c){
    ll res=0;
    for(int i=0;i<n.length();i++){
        res = res*10+ int(n[i]-'0');
        res%=c; 
    }
    return res;
}
int main(){
    int t;  cin>>t;
    string n;
    ll b,c;
    while(t--){
        cin>>n>>b>>c;
        cout<<mmi(mi(n,c),b,c)<<endl;
    }
}
*/
/*
#include<bits/stdc++.h>
#include<string>
using namespace std;//modulo 5
typedef unsigned long long ui;
ui aModM(string s, ui mod) { 
    ui number = 0;
    for (ui i = 0; i < s.length(); i++) {
        number = (number*10 + int(s[i] - '0')); 
        number %= mod;
    }
    return number;
}
int main(){
    int t;
    ui b;
    cin>>t;
    string a;
    while(t--){
        cin>>a;
        cin>>b;
        cout<<aModM(a, b)<<endl;
    }
}
*/
/*
#include<bits/stdc++.h>
using namespace std;//modulo 4
// bool mi(int n){
//     for(int i=2;i<=sqrt(n);i++){
//         if(n%i==0) return false;
//     }
//     return true;
// }
int main(){
    int t,s=0;
    long long n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        s=0;
        for(int i=1;i<=n;i++){
            s+=i;
        }
        if(s==k) cout<<1;
        else cout<<0;
        cout<<endl;
    }
    return 0;
}
*/
/*
#include<bits/stdc++.h>
using namespace std;//modulo 3
int main(){
    int t,s=0;
    long long n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        s=0;
        for(int i=1;i<=n;i++){
            s+=i%k;
        }
        cout<<s;
        cout<<endl;
    }
    return 0;
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
}
*/
/*
#include<bits/stdc++.h>
using namespace std;//modulo 1
typedef long long ll;
// int fun(ll a, ll b,ll c){
//     ll s=1;
//     for(int i=0;i<b;i++){
//         s*=a;
//         s%=c;
//     }
//     return s;
// }
int fun(ll a, ll b,ll c){
    ll s=1,S=1;
    s=a%c;
    for(int i=0;i<b;i++){
        S*=s;
        S%=c;
    }
    return S%c;
}
int main(){
    int t;
    cin>>t;
    long long n,m,x,y,o;
    long long d;
    while(t--){
        cin>>n>>m>>x;
        cout<<fun(n,m,x);
        cout<<endl;
    }
    return 0;
}
*/
/*
#include<bits/stdc++.h>//x thỏa mãn đề thì x+i*p cũng thỏa mãn đề bài

using namespace std;//modulo 8
typedef long long ll;
ll my(ll b, ll p){
    ll d=0;
    for(ll i=1;i<p;i++){
        if((i*i)%p==1) {//dùng số đầu tiên để tìm số tiếp theo
            ll last = i + p*(b/p);
            if(last>b) last-=p;
            d +=((last-i)/p+1);
        }
    }
    return d;
}
int main(){
    int test;
    cin>>test;
    while(test--){
        long long b,p;
        cin>>b>>p;
        cout<<my(b,p)<<endl;
    }
}
*/