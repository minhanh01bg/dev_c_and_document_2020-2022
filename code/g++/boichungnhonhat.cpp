#include <iostream>
#include <vector>
#include<bits/stdc++.h>

using namespace std;
typedef unsigned long long int ll;
const int CONST = 1e4+7; 


ll lcm(ll a, ll b) {
    return (a * b) / __gcd(a, b);
}

ll sum_of_lcm(ll A[], ll N) {

    // get the max LCM from the array
    ll max = 1;
    
    max=A[0];
    for (ll i = 1; i < N; i++) {
        max = lcm(max, A[i]);
    }
    max++;
    // memset(dp, 0, sizeof(dp));
    ll dp[max][2]={0};
    ll pri = 0;
    ll cur = 1;

    // loop through n x 70000
    for (ll i = 0; i < N; i++) {
        for (ll v = 1; v < max; v++) {
            ll x = A[i];
            if (dp[v][pri] > 0) {
                x = lcm(A[i], v);
                dp[v][cur] = (dp[v][cur] == 0) ? dp[v][pri] : dp[v][cur];
                if ( x % A[i] != 0 ) {
                    dp[x][cur] += dp[v][pri] + dp[A[i]][pri];
                } else {
                    dp[x][cur] += ( x==v ) ? ( dp[v][pri] + dp[v][pri] ) : ( dp[v][pri] ) ;
                }
            }
        }
        dp[A[i]][cur]++;
        pri = cur;
        cur = (pri + 1) % 2;
    }

    // for (ll i = 0; i < N; i++) {
    //     dp[A[i]][pri] -= 1;
    // }
    ll total = 0;
    for (ll j = 0; j < max; j++) {
        if (dp[j][pri] > 0) {
            cout<<dp[j][pri] * j<<" ";
        }
    }
    cout << "total:" << total << endl;

    return total;
}


int main() {
    int t;
    cin>>t;
    int z=1;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        ll sum=0;
        for(ll i=0;i<n;i++) {cin>>a[i];sum+=a[i];}
        // cout<<"Case "<<z<<": "<<sum_of_lcm(a,n)+sum;
        // z++;
        sum_of_lcm(a,n);
        cout<<endl;
    } 
    return 0;
}
/*
#include<bits/stdc++.h>
using namespace std;
typedef unsigned short Int;
int a[100], n, b[100];
unsigned long long sum=0;

const int x = 1e4+7; 
long long LCM(long long a,long long b) {
    return a * b / __gcd(a % b, b);
}
void res(){
    int curr = 0;
    vector<Int>c;
    curr = 1;
    for(int i = 0; i < n; i++) {
        if(a[i]!=0) curr=(LCM(curr,b[i]));
    }
    sum += curr%x;
}
void Try(int i){
    for(int j = 0;j <= 1; j++){
        a[i] = j;
        if(i == n - 1) res();
        else Try( i + 1);
    }
}
int main(){
    int t;
    cin >> t;
    Int z = 1;
    while(t--){
        sum = 0;
        cin >> n;
        for(int i = 0;i < n; i++) cin >> b[i];
        Try(0);
        cout<<"Case "<<z<<": ";
        z++;
        cout<<sum - 1;
        cout<<endl;
    }
}*/
#include <vector>
#include<iostream> 
#include<algorithm>
typedef unsigned short int Int;
using namespace std; 
const int x = 1e4+7; 
long long LCM(long long a,long long b){
    return a*b/__gcd(a%b,b);
}
void subsetsUtil(vector<Int>& A, vector<vector<Int> >& res, vector<Int>& subset, int index) { 
    res.push_back(subset); 
    for (int i = index; i < A.size(); i++) {  
        subset.push_back(A[i]); 
        subsetsUtil(A, res, subset, i + 1); 
        subset.pop_back(); 
    } 
  
    return; 
} 
  
vector<vector<Int> > subsets(vector<Int>& A) { 
    vector<Int> subset; 
    vector<vector<Int> > res; 
   
    int index = 0;
    subsetsUtil(A, res, subset, index); 
  
    return res; 
} 
int main() {
    int t;
    cin>>t;
    Int z=1;
    while(t--){
        Int n;
        cin>>n;
        vector<Int> array(n);
        int d=0;
        for(int i=0;i<n;i++) {
            cin>>array[i];
            d+=array[i];
        }
        vector<vector<Int> > res = subsets(array); 
        long long sum=0,curr=1;
        for (int i = 0; i < res.size(); i++) { 
            curr=1;
            for (int j = 0; j < res[i].size(); j++) {
                if(res[i][j]==0||!res[i][j]) {curr=0; break;}
                curr = LCM(curr,res[i][j]);
            }
            sum+=curr;
        }
        cout<<"Case "<<z<<": ";
        z++;
        cout<<(sum-1)%x<<endl; 
    }
    return 0; 
} 