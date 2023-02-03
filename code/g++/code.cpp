#include<bits/stdc++.h>
using namespace std;
int my(int a[],int n){
    int res=0,count=0;//range query 9
    bool x;
    while(1){
        count=0,x=true;
        for(int i=0;i<n;i++) {
            if(a[i] & 1){
                x=false;
                a[i]-=1;
                res++;
            }
            else if(a[i]==0) count++;
        }
        if(count==n) return res;
        if(x){
            for(int i=0;i<n;i++) 
                a[i]/=2;
            res++;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        cout<<my(a,n);
        cout<<endl;
    }
}
/*
#include<bits/stdc++.h>
using namespace std;
int main(){//7
    int t;  cin>>t;
    int n;
    while(t--){
        cin>>n;
        int d=0;
        for(int i=2;i<=sqrt(n);i++){
            d=0;
            while(n%i==0){
                d++;
                n/=i;
            }
            if(d>0) cout<<i<<" "<<d<<" ";
        }
        if(n>2) cout<<n<<" "<<1;

        cout<<endl;
    }
    return 0;
}*/
/*
#include<iostream>
#include<algorithm>//6
#include<cmath>
typedef long long ll;
using namespace std;
int main() {
    int t;  cin >> t;
    ll n;
    while(t--){
        cin >> n;
        bool x=true;
        for(int i=2;i<=n;i++){
            x=true;
            for(int j=2;j<=sqrt(i);j++){
                if(i%j==0){
                    x=false;
                    break;
                }
            }
            if(x==true) cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/
/*
#include<bits/stdc++.h>
using namespace std;//5
typedef long long ll;
int main(){
    int t;  cin >> t;
    ll n;
    while(t--){
        cin >> n;
        ll i=2,d=0;
        for(i=2;i<=sqrt(n);i++){
            while(n%i==0){
                d=i;
                n/=i;

            }
        }
        if(n>2) cout << n << endl;
        else cout<<d<<endl;
    }
    return 0;
}*/
// #include<bits/stdc++.h>
// #define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
// #define endl '\n'
// using namespace std;//4
// typedef long long ll;
// int main(){
//     int t;  cin >> t;
//     ll n;
//     while(t--){
//         cin>>n;
//         if(n!=1){
//         for(ll i=2;i<=sqrt(n);i++){
//             while(n%i==0){
//                 cout << i <<" ";
//                 n/=i;
//             }
//         }
//         if(n>2) cout<<n;}
//         cout<<endl;
//     }
//     return 0;
// }
/*
#include<bits/stdc++.h>
using namespace std;//3
typedef long long ll;
ll bcnn(ll a, ll b){return a*b/__gcd(a,b);}
int main(){
    int t; cin >> t;
    int n;
    while(t--) {
        cin>>n;
        long long d=1;
        for(int i=1;i<=n;i++) d=bcnn(d,i);
        cout<<d<<endl;
    }
}*/
/*
#include<bits/stdc++.h>
using namespace std;
int main(){//2
    int test; cin>>test;
    long long a,b;
    while(test--){
        cin>>a>>b;
        long long d=__gcd(a,b);
        cout<<a*b/d<<" "<<d<<endl;
    
    }
    return 0;
}
*/