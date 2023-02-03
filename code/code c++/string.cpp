
/*
#include<bits/stdc++.h>
using namespace std;//comination 3 (sinh hoan vi)
int  n,stop=0,a[9];
void mi(){
    for(int i=1;i<=n;i++){
        a[i]=i;
    }
}
void ma(){
    int i=n-1;
    while(i>0&&a[i]>a[i+1]) i--;
    if(i==0) stop=1;
    else{
        int k=n;
        while(a[i]>a[k]) k--;
        swap(a[k],a[i]);
        int c=n,r=i+1;
        while(r<c){
            swap(a[c],a[r]);
            r++;c--;
        }
    }
}
void in(){
    for(int i=1;i<=n;i++){
        cout<<a[i];
    }
    cout<<endl;
}
void hoanvi(){
    do{
        in();
        ma();
    }
    while(!stop);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        mi();
        hoanvi();
    }
    return 0;
}*/

/*
#include<bits/stdc++.h>
using namespace std;// đệ qui quay lui
unsigned long long giaithua(long long  n){
    if(n==0) return 1;
    return n*giaithua(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<giaithua(n);
}*/
// #include<bits/stdc++.h>
// using namespace std;
// #define MAX 1000000007
// unsigned long long binomialCoefficient ( int n, int k )
// {
//     unsigned long long  res = 1;
//     for ( int i = 1; i <= k ; i ++ , n-- )
//     {
//         res = res *n/i;
//     }
//     return res;
// }
// int main(){
//     int t;
//     cin>>t;
//     t-=1;
//     int n,r;
//     mi:
//         int d;
//         cin>>n>>r;
//         if(n==r) {cout<<1<<"\n";}
//         else {
//             d=binomialCoefficient(n,r);
//             cout<<d%MAX<<"\n";
//         }
//     while(t--){
//         goto mi;
//     }
//     return 0;
// }
/*
#include<bits/stdc++.h>
using namespace std;
int n,a[100000],b[100000],m;
int c[200000];
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=0;i<100000;i++){
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
        for(int i=0;i<100000;i++){
            if(c[i]>0) cout<<i<<" ";
        }
        cout<<endl;
        for(int i=0;i<n+m;i++){
            if(c[i]>1) cout<<i<<" ";
        }
        cout<<endl;
    }
}*/
/*
#include<bits/stdc++.h>
#include<string>//large number 1
using namespace std;
string mi(string a,string b){
    while(a.size()<b.size()) a="0"+a;
    while(a.size()>b.size()) b="0"+b;
    if(a<b) a.swap(b);
    int nho=0;
    string res="";
    for(int i=a.length()-1;i>=0;i--){
        int so = int(a[i]-'0') - int(b[i]-'0') - nho;
        nho=0;
        if(so<0){
            res = char(so+10+'0') + res;
            nho = 1;
        }
        else res = char(so+'0') + res;
    }
    return res;
}
int main(){
    int t;
    cin>>t;
    string a,b;
    while(t--){
        cin>>a>>b;
        cout<<mi(a,b)<<endl;;
    }
}*/
/*
#include<bits/stdc++.h>
#include<string>//large number 2
using namespace std;
string mi(string a, string b){
    while(a.size()<b.size()) a="0"+a;
    while(a.size()>b.size()) b="0"+b;
    int nho = 0;
    string res="";
    for(int i= a.length()-1; i>=0 ;i--){
        int so= int (a[i]-'0')+int(b[i]-'0')+nho;
        nho=0;
        if(so>=10){
            res = char(so-10+'0')+res;
            nho = 1;
        }
        else res=char(so+'0')+res;
    }
    if(nho!=0) res='1'+res;
    return res;
}
int main(){
    int t;
    cin>>t;
    string a,b;
    while(t--){
        cin>>a>>b;
        cout<<mi(a,b)<<endl;
    }
}*/
/*
#include <bits/stdc++.h>
using namespace std;
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
#include<iostream>
#include<cstdio>
#include<fstream>
using namespace std;
int main(){
    fstream f;
    char data[100];
    f.open("m.txt");
    cout<<"---------------------------"<<endl;
    cout<<"nhap ten cua ban : ";
    cin.getline(data,50);
    f<<data<<endl;
    cout<<"nhap tuoi cua ban : ";
    cin>>data;
    cin.ignore();
    f<<data<<endl;
    f.open("m.text");
    cout<<"---------------------------"<<endl;
    f>>data;
    cout<<data<<endl;
    f>>data;
    cout<<data<<endl;
    f.close();
    return 0;
}*/
/*
#include<bits/stdc++.h>
using namespace std;
bool mmi(int n){
    if(n<2) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int ucln(int n,int m){
    return __gcd(n,m);
}
int main(){
    int t,x,d=0;
    cin>>t;
    while(t--){
        cin>>x;
        d=0;
        for(int i=1;i<=x;i++){
            if(ucln(i,x)==1) d++;
        }
        cout<<d<<" ";
        if(mmi(d)) cout<<1;
        else cout<<0;
        cout<<endl;
    }
    return 0;
}*/
/*
#include<bits/stdc++.h>
using namespace std;//gcd 5
int main(){
    int t;
    cin>>t;
    long long n,x,y,d;
    while(t--){
        cin>>n>>x>>y;
        d = __gcd(x,y);
        for(int i=1;i<=d;i++){
            cout<<n;
        }
        cout<<endl;
    }
}*/
