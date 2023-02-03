/*
#include<bits/stdc++.h>
using namespace std;//Range Query 1
int mi(int n,int a[10000],int b,int c){
    int s=0;
    for(int i=b-1;i<c;i++){
        s+=a[i];
    }
    return s;
}
int main(){
    int t,n,a[10000],m,b,c;
    cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=0;i<n;i++){
            cin>>a[i];
            
        }
        while(m--){
            cin>>b>>c;
            cout<<mi(n,a,b,c);
            cout<<endl;
        }
        
    }
}*/
/*
#include<bits/stdc++.h>
using namespace std;//prime 10
int mi(int n){
    int d=0;
    while(n){
        d+=n%10;
        n/=10;
    }
    return d;
}
int du(int n){
    int d=0,e=n;
    for(int i=2;i<=sqrt(n);i++){
        while(n%i==0){
            d+=mi(i);
            n/=i;
        }
    }
    if(n!=1&&n!=e) d+=mi(n);
    return d;
}
int main(){
    int t;
    int n;
    cin>>t;
    while(t--){
        cin>>n;
        if(mi(n)==du(n)) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}*/
/*
#include<bits/stdc++.h>
using namespace std;//FIBONACI 3
int main(){
    int t,n,x,a[100];
    a[0]=0,a[1]=1;
    for(int i=2;i<100;i++){
        a[i]=a[0]+a[1];
        a[0]=a[1];
        a[1]=a[i];
    }
    a[0]=0;
    cin>>t;
    while(t--){
        cin>>n;
        while(n--){
            cin>>x;
            for(int i=0;i<100;i++){
                if(x==a[i]){
                    cout<<x<<" ";
                }
            } 
        }  
        cout<<"\n";
    }
}*/
/*
#include<bits/stdc++.h>
using namespace std;
int main(){//Range Query 11
    int t,n,a[1000], maxx;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int Min=INT_MAX;
        for (size_t i = 0; i < n-1; i++)
        {
            for (size_t j = i+1; j < n; j++)
            {
                Min=min(Min,abs(a[i]-a[j]));
            }
        }
        cout<<Min;
        cout<<endl;
    }
    return 0;
}*/
/*
#include<iostream>
#include<string.h>
#include<string>
using namespace std;
void mi(string n,int y,int o){
    for(int i=y;i<o;i++){
        cout<<n[i];
    }
    cout<<" ";
}  
int main(){
    int t,y,o;
    cin>>t;
    cin.ignore();
    string n;
    while(t--){
        getline(std::cin,n);
        o=n.length();
        for(int i=n.length()-1;i>=0;i--){
            if(n[i]==' '){
                y=i+1;    
                mi(n,y,o);
                o=y-1;
            }
        }
        for(int i=0;i<y;i++){
            cout<<n[i];
        }
        cout<<endl; 
    }
}
*/
/*
#include<iostream>
#include<string>
void mi(std::string n){
    int x=0;//string 17
    for(int i=0;i<n.length();i++){
        x=0;
        for(int j=0;j<n.length();j++){
            if(n[i]==n[j]){
                x++;
            }
        }
        if(x==1) std::cout<<n[i];
    }
} 
int main(){
    int t,y,o;
    std::cin>>t;
    std::cin.ignore();
    std::string n;
    while(t--){
        std::getline(std::cin,n);
        mi(n);
        std::cout<<std::endl; 
    }
}*/
/*
#include<iostream>
#include<string>
void mi(std::string n){
    int x=n.length();//string 15
    for(int i=0;i<n.length()-1;i++){
        for(int j=i+1;j<n.length();j++){
            if(n[i]==n[j]){
                x++;
            }
        }
    }
    std::cout<<x;
} 
int main(){
    int t,y,o;
    std::cin>>t;
    std::cin.ignore();
    std::string n;
    while(t--){
        std::getline(std::cin,n);
        mi(n);
        std::cout<<std::endl; 
    }
}*/
/*
#include<bits/stdc++.h>
#include<string>//string 2
using namespace std;
void mi(string n){
    int x=0,y=0;
    for(int i=0;i<n.length();i++){
        if(i%2){
            x=x+(n[i]-48);
        }
        else y=y+(n[i]-48);
    }
    if((x-y)%11==0) cout<<1;
    else cout<<0;
}
int main(){
    string n;
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        getline(cin,n);
        mi(n);
        cout<<endl;
    }
}*/
/*
#include<bits/stdc++.h>
using namespace std;
void selec(int n,int a[1000]){
    int index;//Re-arrang Array 5
    for(int i=0;i<n-1;i++){
        index=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[index]) index=j;
        }
        if(index!=i) swap(a[i],a[index]);
    }
    for(int i=0,j=n-1;i<=n/2,j>=n/2;j--,i++){
            if(i!=j)
            {cout<<a[j]<<" ";
            cout<<a[i]<<" ";}
        }
        if(n%2) cout<<a[n/2];
    cout<<endl;
}
int main(){
    int t,a[1000],n;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        selec(n,a);
    }
}*/
/*
#include<iostream>
using namespace std;// COMINATION 1
int a[100],n,stop=0;
void khoitao(){
    for(int i=0;i<n;i++){
        a[i]=0;
    }
}
void xuat(){
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    cout<<" ";
}
void sinh(){
    int i=n-1;
    while(a[i]==1&&i>=0){
        a[i]=0;
        i--;
    }
    if(i==-1) stop=1;
    else a[i]=1;
}
void ctrinh(){
    stop=0;
    while(stop==0){
        xuat();
        sinh();
        
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){

        cin>>n;
        khoitao();
        ctrinh();
        cout<<endl;
    }
}*/
/*
#include<bits/stdc++.h>//string 3
#include<string>
void mi(std::string n){
    long long sum=0,m=0,s=0,S=1;
    for(long long i=n.length()-1;i>=0;i--){
        if(n[i]=='1') {
            S=1;
            for(int j=0;j<m;j++){
                S*=2;
                S%=5;   
            }
            s+=(S%5);
        }
        m++;
    }
    if(s%5==0) std::cout<<"Yes";
    else std::cout<<"No";
}
int main(){
    int t;
    std::string n;
    std::cin>>t;
    std::cin.ignore();
    while(t--){
        getline(std::cin,n);
        mi(n);
        std::cout<<std::endl;
    }
}*/

/*
#include<bits/stdc++.h>
using namespace std;
int n,a[100000],b[100000],m;
int c[200000];//sorting 4
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=0;i<n+m;i++){
            c[i]=0;
        }
        for(int i=0;i<n;i++){
            cin>>a[i];
            c[a[i]]++;
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
            c[b[i]]++;
        }
        for(int i=0;i<n+m;i++){
            if(c[i]==1) cout<<i<<" ";
            if(c[i]>1) cout<<i<<" ";
        }
        cout<<endl;
        for(int i=0;i<n+m;i++){
            if(c[i]>1) cout<<i<<" ";
        }
        cout<<endl;
    }
}*/

// #include<bits/stdc++.h>
// #define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
// #define endl '\n'
// using namespace std;
// bool mi(int n){
//     for(int i=2;i<=sqrt(n);i++){
//         if(n%i==0) return false;
//     }
//     return true;
// }
// int main(){
//     fast_io;
//     int t;
//     cin>>t; 
//     int n,x=0;
//     while(t--){
//         cin>>n;
//         x=0;
//         for(int i=2;i<=sqrt(n)*2;i++){
//             if(mi(i)&&mi(n-i)){
//                 cout<<i<<" "<<n-i;
//                 x=1;    
//                 break;
//             }
//         }
//         if(x==0) cout<<-1;
//         cout<<endl;
//     }
//     return 0;
// }
/*
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;//Searching 17
int main(){
    int t,n,k,a[100];
    cin>>t;
    int d=0,Min;
    while(t--){
        cin>>n>>k;
        d=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        cout<<a[k-1];
        cout<<endl;
    }
    return 0;
}*/
/*
#include<bits/stdc++.h>
#include<string>
using namespace std;
void mi(string n){//string 14
    int d=0;
    if(n[0]!=' '&&n[0]!='\t'&&n[0]!='\n') d=1;
    for(int i=0;i<n.length()-1;i++){
        if(n[i]==' '&&n[i+1]!=' '){
            d++;
        }
    }
    for(int i=0;i<n.length()-1;i++){
        if(n[i]=='\t'&&n[i+1]!='\t'){
            d++;
        }
    }
    for(int i=0;i<n.length()-1;i++){
        if(n[i]=='\n'&&n[i+1]!='\n'){
            d++;
        }
    }
    cout<<d;
}
int main(){
    int t;
    string n;
    cin>>t;
    cin.ignore();
    while(t--){
        getline(cin,n);
        mi(n);
        cout<<endl;
    }
}*/
/*
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;//LCM & GCD 7
ll bcnn(ll a,ll b){
    return a/__gcd(a,b)*b;
}
ll chia(ll d){
    ll t=0;
    while(d){
        t++;
        d/=10;
    }
    return t;
}
int main(){
    int t;
    int x,y,z,n;
    ll d;
    cin>>t;
    ll e,s=1,f;
    while(t--){
        s=1;
        cin>>x>>y>>z>>n;
        d=bcnn(bcnn(x,y),z);
        f=pow(10,n-1);
        e=(pow(10,n-1)/d)+1;
        if(f%d==0) {cout<<f;s=0;}
        e=e*d;
        if(chia(e)==n&&s==1)  cout<<e;
        else if(chia(e)!=n&&s==1) cout<<-1;
        cout<<endl;
    }
}*/
/*
#include<bits/stdc++.h>
using namespace std;//fibonacci 2
typedef unsigned long long ll;
int main(){
    int d=0, t;
    ll n, F[100];
    F[0]=0;F[1]=1;
    for(size_t i=2;i<100;i++){
        F[i]=F[i-1]+F[i-2];
    }
    cin>>t;
    while(t--){
        cin>>n;
        d=0;
        for(size_t i=0;i<100;i++){
            if(n==F[i]){
                d=1;
                cout<<"YES"<<"\n";
                break;
            }
        }
        if(d==0)
        cout<<"NO"<<"\n";
    }
    return 0;
}*/
/*
#include<bits/stdc++.h>
using namespace std;//fibonacci 2
typedef unsigned long long ll;
int main(){
    int d=0, t;
    ll n, F[100];
    F[0]=0;F[1]=1;
    for(size_t i=2;i<100;i++){
        F[i]=F[i-1]+F[i-2];
    }
    cin>>t;
    t-=1;
mi:
    cin>>n;
    d=0;
    for(size_t i=0;i<100;i++){
        if(n==F[i]){
            d=1;
            cout<<"YES"<<"\n";
            break;
        }
    }
    if(d==0)
    cout<<"NO"<<"\n";
    while(t--){
        goto mi;
    }
    return 0;
}*/
