#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[100][100];

int my(){
    int d=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==1){
                d++;
                // if(i>0&&j<m-1)
                (a[i][j+1]==1) ? a[i][j+1]=2:a[i][j+1]=0;
                (a[i][j-1]==1) ? a[i][j+1]=2:a[i][j+1]=0;
                
                (a[i+1][j+1]==1) ? a[i][j+1]=2:a[i][j+1]=0;
                (a[i-1][j+1]==1) ? a[i][j+1]=2:a[i][j+1]=0;

                (a[i-1][j]==1) ? a[i][j+1]=2:a[i][j+1]=0;
                (a[i+1][j]==1) ? a[i][j+1]=2:a[i][j+1]=0;
                
                (a[i-1][j-1]==1) ? a[i][j+1]=2:a[i][j+1]=0;
                (a[i+1][j-1]==1) ? a[i][j+1]=2:a[i][j+1]=0;
            }
            if(a[i][j]==2){  
                (a[i][j+1]==1) ? a[i][j+1]=2:a[i][j+1]=0;
                (a[i][j-1]==1) ? a[i][j+1]=2:a[i][j+1]=0;
                (a[i+1][j+1]==1) ? a[i][j+1]=2:a[i][j+1]=0;
                (a[i-1][j+1]==1) ? a[i][j+1]=2:a[i][j+1]=0;
                (a[i-1][j]==1) ? a[i][j+1]=2:a[i][j+1]=0;
                (a[i+1][j]==1) ? a[i][j+1]=2:a[i][j+1]=0;
                (a[i-1][j-1]==1) ? a[i][j+1]=2:a[i][j+1]=0;
                (a[i+1][j-1]==1) ? a[i][j+1]=2:a[i][j+1]=0;
            }
        }
    }
    return d;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=0;i<n;i++) 
            for(int j=0;j<m;j++) cin>>a[i][j];   
        cout<<my()<<endl;    
    }
}
// #include<bits/stdc++.h>
// using namespace std;

// typedef vector<int> BigInt;
// typedef long long ll;

// #define pb push_back 
// #define pob pop_back 
// #define EL printf("\n")

// void Set(BigInt &a) {//xóa các số 0 ở dầu dãy
//     while (a.size() > 1 && a.back() == 0) a.pob();
// }

// void Print(BigInt a) {
//     Set(a);
//     printf("%d", (a.size() == 0) ? 0 : a.back());
//     for(int i=a.size()-2;i>=0;i--) printf("%09d", a[i]); EL;
// }

// BigInt Integer(string s) {
//     BigInt ans;
//     if (s[0] == '-') return ans;
//     if (s.size() == 0) {ans.pb(0); return ans;}
//     while (s.size()%9 != 0) s = '0'+s;
//     for (int i=0;i<s.size();i+=9) {
//         int v = 0;
//         for (int j=i;j<i+9;j++) v = v*10+(s[j]-'0');
//         ans.insert(ans.begin(),v);
//     }
//     Set(ans);
//     return ans;
// }

// BigInt Integer(char c[]) {
//     string s = "";
//     for(int i=0;i<strlen(c);i++)
//      s = s + c[i];
//     return Integer(s);
// }

// BigInt Integer(ll x) {
//     string s = "";
//     while (x > 0) s = char(x%10+'0') + s, x /= 10;
//     return Integer(s);
// }

// BigInt Integer(int x) {
//     return Integer((ll) x);
// }

// void operator >> (istream &in, BigInt &a) {
//     string s;
//     cin>>s;
//     a = Integer(s);
// }
// void operator << (ostream &out, BigInt a) {
//     Print(a);
// }
// int main(){
//     BigInt A;
//     cin>>A;
//     cout<<A;
// }