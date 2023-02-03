#include<bits/stdc++.h>
using namespace std;
string mi(string a){
    int n= a.length(),x=0;
    for(int i=n-1;i>=0;i--){
        if(a[i]-'0'<a[i-1]-'0'){
            x=i;
            break;
        }
    }
    int mac=-1,d=0;
    for(int i=n-1;i>=x;i--){
        d=a[i]-'0';
        if(d<a[x-1]-'0'){
            mac=max(mac,d);
        }
    }
    for(int i=n-1;i>=x;i--){
        if(a[i]-'0'==mac) {
            d=i;
        }
    }
    if(mac!=-1) {
        swap(a[d],a[x-1]);
        return a;
    }
    else return "-1";
    
}
int main(){
    int t;
    cin>>t;
    string a;
    cin.ignore();
    while(t--){
        getline(cin,a);
        cout<<mi(a)<<endl;
    }
}
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    string a,b;
    while(t--){
        cin>>a>>b;
        int l1=a.length();
        int l2=b.length();
        int ans[10000]={0};int d=0,e=0;
        for(int i = l1-1;i >= 0; i--){
            e=0;
            for(int j = l2-1;j >= 0; j--){
                ans[d+e]+=(a[i]-'0')*(b[j]-'0');
                e++;
            }
            d++;
        }
        int tmp;
        for(int i = 0;i < d+e; i++){
            tmp = ans[i]/10;
            ans[i]%=10;
            ans[i+1]+=tmp;
        }
        for(int i=e+d-1;i>=0;i--){
            if(ans[i]>0){
                e=i;
                break;
            }
        }
        for(int i=e;i >= 0; i--){
            cout<<ans[i];
        }
        cout<<endl;
    }
}*/

/*
#include <stdio.h>
#include <string.h>
int main()
{
    int a[100],b[100];
    int ans[200]={0};
    int i,j,tmp;
    char s1[101],s2[101];
    scanf(" %s",s1);
    scanf(" %s",s2);
    int l1 = strlen(s1);
    int l2 = strlen(s2);
    for(i = l1-1,j=0;i>=0;i--,j++){
        a[j] = s1[i]-'0';
    }
    for(i = l2-1,j=0;i>=0;i--,j++){
        b[j] = s2[i]-'0';
    }
    for(i = 0;i < l2;i++){
        for(j = 0;j < l1;j++){
            ans[i+j] += b[i]*a[j];
        }
    }
    for(i = 0;i < l1+l2;i++){
        tmp = ans[i]/10;
        ans[i] = ans[i]%10;
        ans[i+1] = ans[i+1] + tmp;
    }
    for(i = l1+l2; i>= 0;i--){
        if(ans[i] > 0)
            break;
    }
    printf("Product : ");
    for(;i >= 0;i--){
        printf("%d",ans[i]);
    }
    return 0;
}*/
/*
#include<bits/stdc++.h>
using namespace std;//re-arrang array 6
int main(){
    int t;
    cin>>t;
    int n,a[100];
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i]; 
        }
        for(int i=1;i<n;i++){
            if(a[i]==a[i-1]) {
                
                a[i-1]*=2;
                a[i]=0;
            }
        }
        int j=0;
        int b[100]; for(int i=0;i<n;i++) b[i]=0;
        for(int i=0;i<n;i++){
            if(a[i]!=0) {b[j]=a[i];j++;}
        }
        for(int i=0;i<n;i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }
}*/
/*
#include<bits/stdc++.h>
using namespace std;//re-arrang array 4
                    //từ nhỏ đến lớn
void mi(int n,int a[1000]){
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int b[1000];
    int j=0;
    for(int i=0;i<n;i+=2){
        b[i]=a[j];
        j++;
    }
    for(int i=1;i<n;i+=2){
        b[i]=a[j];
        j++;
    }
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    int a[1000],n;
    while(t--){
        cin>>n;
        mi(n,a);
    }
}*/
/*
#include<bits/stdc++.h>
#include<string>
using namespace std;
long mi(string s,int b){
    long number =0;
    for(int i=0;i<s.length();i++){
        number = (number*10+int(s[i]-'0'))%b;
    }
    return number;
}
int main(){
    string s;
    cin>>s;
    int b;cin>>b; 
    cout<<mi(s,b);
}*/
/* ------------------modulo 11-----------------------
#include<iostream> 
using namespace std; 
typedef long long int ll; 
ll mulmod(ll a, ll b, ll mod) 
{ 
    ll res = 0;
    a = a % mod; 
    while (b > 0) 
    { 
        if (b % 2 == 1) 
            res = (res + a) % mod; 
        a = (a * 2) % mod; 
        b /= 2; 
    } 
    return res % mod; 
} 
int main() 
{
    int t;
    cin>>t;
    t-=1;
mi:
    ll a, b,c; 
    cin>>a>>b>>c;
    cout << mulmod(a, b, c)<<endl; 
    while(t--)  goto mi;
    return 0; 
}
*/
// #include<bits/stdc++.h>
// using namespace std;
// typedef unsigned long long ll;
// int main(){
//     int t; cin>>t;
//     ll a,b,c;
//     while(t--) {
//         cin>>a>>b>>c;
//         a = ((((a % c)%c) * ((b % c)%c))%c) %c;
//         cout<<a;
//         cout<<"\n";
//     }
//     return 0;
// }

/*#include<bits/stdc++.h>
using namespace std ;//a^b 
typedef unsigned long long ll;
ll mu(ll a, ll n){
    if(n==0) return 1;
    ll t = mu(a,n/2);
    if(n%2!=0) return a*t*t;
    else return t*t;
}
int main(){ 
    ll a, b;
    cin>>a>>b;
    cout<<mu(a,b);
}*/
/*
#include<bits/stdc++.h>
typedef unsigned long long ll;
using namespace std;//mmodulo 6
ll aModc(string a,ll c){
    long number=0;
    for(int i=0;i<a.length();i++){
        number = (number*10+int(a[i]-'0'))%c;
    }
    return number;
}
ll mu(ll a, ll n,ll c){
    if(n==0) return 1;
    ll t = mu(a,n/2,c);
    if(n%2!=0) return a*t*t%c;
    else return t*t%c;
}
int main(){
    int t;
    cin>>t;
    string a;
    ll b, c;
    while(t--){
        cin>>a>>b>>c;
        cout<<mu(aModc(a,c),b,c)<<endl;
    }
    return 0;
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
int aMODc(string a,int c){
    int number=0;
    for(int i=0;i<a.length();i++){
        number=(number*10+int(a[i]-'0'));
        number%=c;
    }
    return number;
}
int main(){
    int t;
    cin>>t;
    string a;
    int c;
    while(t--){
        cin>>c>>a;
        int d= aMODc(a,c);
        cout<<__gcd(d,c)<<endl;
    }
}*/
/*
#include<bits/stdc++.h>
#include<string>
using namespace std;
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
    ui b,m;
    cin>>t;
    string a;
    while(t--){
        cin>>a;
        cin>>b;
        cout<<aModM(a,b)<<endl;
    }
}*/

/*
#include<bits/stdc++.h>
using namespace std;
int n,a[100],k;//COMINATION 2
bool x = true;
void mi();

void mmi();

int main(){
    int t;
    cin>>t;
    while(t--) {
        x = true;
        cin>>n>>k;
        mi();
        while(x==true) {
            for(int i = 1; i <= k; i++){
                cout<<a[i];
            }
            cout<<" ";
            mmi();
            
        }
        cout<<endl;
    }
    return 0;
}
void mi(){
    for(int i = 1 ; i <= k ; i++) {
        a[i]=i;
    }
}
void mmi() {
    int i = k;
    while(i>0 && a[i]==n-k+i) i--;
    if(i>0){
        a[i]+=1;
        int y=1;
        for(int j = i+1 ; j <= k ; j++){
            a[j] = a[i]+y;
            y++;
        }
    }
    else x= false;
}*/