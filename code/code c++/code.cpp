

#include<bits/stdc++.h>
using namespace std;//sinh to hop
int a[100],n,k,stop=1;
void khoitao(){
    for(int i=1;i<=k;i++) a[i]=i;
}
void res(){
    for(int i=1;i<=k;i++) cout<<a[i];
    cout<<endl;
}
void sinh(){
    int i=k;
    while(a[i]==n-k+i) i--;
    if(i==0) stop=0;
    else a[i]++;
    int p=a[i];
    while(i<=k) a[i++]=p++;  
}
void mi(){
    while(stop){
        res();
        sinh();
    }
}
int main(){
    cin>>n>>k;
    khoitao();
    mi();
}

/*
#include<bits/stdc++.h>
using namespace std;//to hop
int a[100],n,k;

void res(){
    for(int i=1;i<=k;i++){
        cout<<a[i];
    }
    cout<<" ";
}
void Try(int i){
    
    for(int j=a[i-1]+1;j<=n-k+i;j++){
        a[i]=j;
        if(i==k) res();
        else Try(i+1);
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        cin>>n>>k;
        a[0]=0;
        Try(1);
        cout<<endl;
    }
}*/
/*
#include<bits/stdc++.h>
using namespace std;//sau nhi phan
int a[100],n;
void res(){
    for(int i=1;i<=n;i++){
        cout<<a[i];
    }
    cout<<endl;
}
void Try(int i){
    for(int j=0;j<=1;j++){
        a[i]=j;
        if(i==n) res();
        else Try(i+1);
    }
}
int main(){
    cin>>n;
    Try(1);
}*/
/*
#include<bits/stdc++.h>
using namespace std;//sinh nhi phan
int n,a[100],stop=1;
void khoitao(){
    for(int i=1;i<=n;i++) a[i]=0;
}
void sinh(){
    int i=n;
    while(a[i]==1&&i>0){
        a[i]=0;
        i--;
    }
    if(i==0) stop=0;
    else a[i]=1;
}
void mi(){
    while(stop){
        for(int i=1;i<=n;i++) cout<<a[i];
        cout<<endl;
        sinh();
    }
}
int main(){
    cin>>n;
    mi();
}*/
/*
#include<iostream>
using namespace std;
int n,a[1000],m;//Searching 8
void dem(){
    int d=0;
    for(int i=0;i<n;i++){
        if(a[i]==m) d++;
    }
    if(d==0) {cout<<-1<<"\n";return;} 
    else cout<<d<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        dem();
    }
}*/
/*
#include<bits/stdc++.h>
using namespace std;
int n,a[100][100];//Matrix 7
void mi(){
    for(int i=0;i<n;i++){
            if(i%2==0) 
                for(int j=0;j<n;j++) 
                    cout<<a[i][j]<<" ";
            if(i%2) for(int j=n-1;j>=0;j--) 
                    cout<<a[i][j]<<" ";
        }
        cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        mi();
    }
    return 0;
}*/
/*
#include<bits/stdc++.h>
using namespace std;// Matrix 10
int b[100][100],c[100][100];
void mi(int n,int m,int a[100][100]){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            c[i][j]=0;
        }
    }
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] == 1){
                for(int k=0;k<n;k++) 
                    c[k][j]=1;   
                for(int l=0;l<m;l++) 
                    c[i][l]=1;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<c[i][j]<<" ";
        }

        cout<<endl;
    }
}
int main(){
    int t,n,m,a[100][100];
    cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            } 
        }
        mi(n,m,a);
    }
    return 0;
}*/
/*
#include<bits/stdc++.h>
using namespace std;
long long n,a[100000],b[100000],x=0;
void mi(){
    x=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            b[x]=a[i]+a[j];
            x++;
        }
    }
}
void selectionsort(){
    int index,y=0;
    for(int i=0;i<x-1;i++){
        index=i;
        for(int j=i+1;j<x;j++){
            if(b[j]<b[index]) index=j;
        }
        if(index!=i) swap(b[i],b[index]);
    }
    if(b[x-1]<0) {cout<<b[x-1]<<"\n";return;}
    if(b[0]>0){cout<<b[0]<<"\n";return;}
    for(int i=0;i<x;i++){
        if(b[i]>0){
            y=i;
            break;
        }
    }
    if(abs(b[y-1])<b[y]) cout<<b[y-1];
    else cout<<b[y];
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        mi();
        selectionsort();
    }
}*/

/*
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
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
/*
#include<bits/stdc++.h>
using namespace std;//prime 6
bool mi(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    int t;
    int n;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=2;i<n;i++){
            if(mi(i)){
                if(mi(n-i)){
                    cout<<i<<" "<<n-i;
                    break;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}*/
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
}*/
/*
#include<bits/stdc++.h> 
using namespace std; 
int d[1000000]; 
int main() { 
    int t; 
    cin>>t; 
    while(t--) { 
        int n,a; 
        cin>>n; 
        memset(d,0,sizeof(d)); 
        bool ok=false; 
        for(int i=0; i<n; i++) { 
            cin>>a; 
            d[a]+=1; 
            if(d[a]>1&&ok==false) { 
                cout<<a; 
                ok=true; 
                } 
        } 
        if(ok==false) 
        cout<<-1; 
        cout<<endl; 
    } 
}*/
/*
#include<bits/stdc++.h>
using namespace std;
int a[100000];//searching 14
int main(){
    int t,n,b,x=0;
    cin>>t;
    while(t--){
        cin>>n;
        x=0;
        memset(a,0,sizeof(a));
        for(int i=0;i<n;i++){
            cin>>b;
            a[b]+=1;
            if(a[b]>1&&x==0) {
                x=1;
                cout<<b;
            }
        }
        if(x==0) cout<<-1;
        cout<<endl;
    }
}*/
/*
#include<bits/stdc++.h>
using namespace std;
int a[10000],n;
void bubblesort(){
    int x=0,y=0,d=0;
    for(int i=0;i<n-1;i++){
        x=0;
        for(int j=0;j<n-1;j++){
            if(a[j+1]<a[j]) {x=1; swap(a[j+1],a[j]);}
        }
        if(x==1){d++;}
        if(d!=0&&x==1){
            cout<<"Buoc "<<d<<": ";
            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
            y=1;
            cout<<endl;
        }
    }
    if(y==0){
        cout<<"Buoc 1: ";
    for(int i=0;i<n;i++){
        
        cout<<a[i]<<" ";
    }
    cout<<endl;}
}
int main(){
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        bubblesort();
}*/
/*
#include<bits/stdc++.h>
using namespace std;
long long t,n;
void mi(){
    int d=0,x=0,y=0;
    for(int i=2;i<=sqrt(n);i++){
        d=0;
        while(n%i==0){
            d++;
            x++;
            n/=i;
        }
        if(d>1||x>2){
            cout<<0<<"\n";
            return;
        }
    }
    if(d!=1||x<2){ cout<<0<<"\n"; return;}
    if(x==2&&d==1)
    cout<<1<<"\n";
}
int main(){
    cin>>t;
    while(t--){
        cin>>n;
        mi();
    }
}*/
/*
#include<bits/stdc++.h>
using namespace std;
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
}*/
/*
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll c[10000000];
ll n,m,a[10000000],b[10000000];
int fu(){
    for(int i=0;i<n+m;i++) c[i]=0;
    for(ll i=0;i<n;i++){
        c[a[i]]+=1;
    }
    for(ll i=0;i<m;i++){
        c[b[i]]+=1;
    }
    for(ll i=0;i<n+m;i++){
        if(c[i]>0) cout<<i<<" ";
    }
    cout<<"\n";
}
int fun(){
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            if(b[j]==a[i]) {cout<<b[j]<<" "; break;}
        }
    }
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        for(ll i=0;i<m;i++){
            cin>>b[i];
        }
        fu();
        fun();
    }
    return 0;
}*/
/*
#include <bits/stdc++.h>
using namespace std;
bool mi(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main() {
    int t;
    cin>>t;
    long n,dem;
    while(t--){
    cin>>n;
    dem=0;
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0&&mi(i)){ dem++;
            n/=i;
        }
    }
        if(dem==2&&mi(n)==true) cout<<1<<endl;
        else cout<<0<<endl;
    }
}
 */   
