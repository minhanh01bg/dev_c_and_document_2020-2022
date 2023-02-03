#include<iostream>
using namespace std;
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
}
/*
#include<bits/stdc++.h>
using namespace std;//order 13
typedef long long ll;
ll mi(int ar1[], int ar2[], int m, int n){
    ll result = 0, sum1 =0, sum2 = 0;
    for(int i = 0;i < m; i++){
        sum1+=ar1[i];
        ll Sum=0,x=0;
        if (i!=m-1)
        {
			for(int j = i + 1;j < n;j++){
        	    (ar2[j]>ar1[i]) ? Sum+=ar2[j] : Sum+=0;
        	}
		}
        result=max(result,sum1+Sum);
    }
    
    for(int i = 0;i < n; i++){
        sum2+=ar2[i];
        ll Sum=0,x=0;
        if (i!=n-1) {
        	for(int j = i + 1;j < m;j++){
        	    (ar1[j]>ar2[i]) ? Sum+=ar1[j] : Sum+=0;
        	}
        }
        result=max(result,sum2+Sum);
    }

    return result;
}
main(){
    int t;
    cin >> t;
    int n, m;
    while(t--){
        cin >> n >> m;
        int a[n],b[m];
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<m;i++) cin >> b[i]; 
        cout<<mi(a,b,n,m)<<endl;
    }
}*/
/*
#include <bits/stdc++.h>

using namespace std;
 
void PrintMinNumberForPattern(string seq) {
    string result;
 
    stack<int> stk;
    for (int i = 0; i <= seq.length(); i++) {
        stk.push(i + 1);
        if (i == seq.length() || seq[i] == 'I'){
            while (!stk.empty())
            {
                result += to_string(stk.top());
                // result += " ";
                stk.pop();
            }
        }
    }
 
    cout << result << endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        string str;
        cin >> str;
        PrintMinNumberForPattern(str);
    }
    return 0;
}*/
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    string str;
    int k;
    while(test--){
        cin >> str >> k;
        int d=0,x=0;
        for(int i=0;i<str.size();i++){
            map<char,int>mp;
            x=0;
            for(int j=i;j<str.size();j++){
                mp[str[j]]++;
                x = mp.size();
                if(x==k) d++;
                if(x>k) break;
            }
        }
        cout<<d<<endl;
    }
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
int k;
bool comp(int b,int c){
    return (abs(k-b) < abs(k-c));
}
// Function to sort an array according absolute
// difference with x.
/*
void rearrange(int arr[], int n, int x){
    multimap<int, int> m;
    multimap<int ,int >:: iterator it;
    for (int i = 0 ; i < n; i++)
        m.insert(make_pair(abs(x-arr[i]),arr[i]));
 
    int i = 0;
    for (it = m.begin(); it != m.end(); it++)
        arr[i++] = (*it).second ;
}
 
void printArray(int arr[] , int n){
    for (int i = 0 ; i < n; i++)
        cout << arr[i] << " ";
    cout<<endl;
}*/
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin >> n >> k;
//         int a[n];
//         for(int i=0;i<n;i++) cin>>a[i];

//         stable_sort(a, a+n, comp);//c2
        
//         for(int i=0;i<n;i++) cout<<a[i]<<" ";
//         cout<<endl;
//         /* rearrange(a, n, k); //c3
//          printArray(a, n);*/
//     }
// }*/

/*
#include<bits/stdc++.h>
using namespace std;
const int x = 1e4+7; 
typedef long long ll;
ll LCM(ll a,ll b){
    return a*b/__gcd(a,b);
}
int main(){
    int t;
    cin>>t;
    int n;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int b[100],sum=0;
        for(int i=0;i<100;i++) b[i]=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                b[i]+=bcnn(a[i],a[j]);
            }
        }
    }
}*/
/*#include<bits/stdc++.h>
using namespace std; 
using namespace std; 
int R,C;
bool mat[100][100];
int maxArea(bool mat[100][100]) 
{    
    int hist[R + 1][C + 1]; 
  
    for (int i = 0; i < C; i++) { 
        hist[0][i] = mat[0][i]; 
  
        for (int j = 1; j < R; j++) 
            hist[j][i] = (mat[j][i] == 0) ? 0 : hist[j - 1][i] + 1; 
    } 
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++) cout<<hist[i][j]<<" ";
        cout<<endl;
    }
    for (int i = 0; i < R; i++) { 
        int count[R + 1] = { 0 }; 
        for (int j = 0; j < C; j++) 
            count[hist[i][j]]++; 
        int col_no = 0; 
        for (int j = R; j >= 0; j--) { 
            if (count[j] > 0) { 
                for (int k = 0; k < count[j]; k++) { 
                    hist[i][col_no] = j; 
                    col_no++; 
                } 
            } 
        } 
    } 
     for(int i=0;i<R;i++){
        for(int j=0;j<C;j++) cout<<hist[i][j]<<" ";
        cout<<endl;
    }
    int curr_area, max_area = 0; 
    for (int i = 0; i < R; i++) { 
        for (int j = 0; j < C; j++) { 
            curr_area = (j + 1) * hist[i][j]; 
            if (curr_area > max_area) 
                max_area = curr_area; 
        } 
    } 
    return max_area; 
} 
int main(){
    int t;
    cin>>t;
    int n, m;
    while(t--){
        cin >> m >> n;
        R=m,C=n;
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                cin>>mat[i][j];
        
        cout<<maxArea(mat)<<endl;

    }
}*/

// #include<iostream>
// using namespace std;
// typedef unsigned long long ll;
// ll maxPathSum(int ar1[], int ar2[], int m, int n) {
//     int i = 0, j = 0;
//     ll result = 0, sum1 = 0, sum2 = 0;
//     while (i < m && j < n) {
//         if (ar1[i] < ar2[j])
//             sum1 += ar1[i++];
//         else if (ar1[i] > ar2[j])
//             sum2 += ar2[j++];
//         else {
//             result += max(sum1, sum2);
//             sum1 = 0, sum2 = 0;
//             int temp = i;
//             while (i < m && ar1[i] == ar2[j])
//                 sum1 += ar1[i++];
 
//             while (j < n && ar1[temp] == ar2[j])
//                 sum2 += ar2[j++];
 
//             result += min(sum1, sum2);
 
//             sum1 = 0, sum2 = 0;
//         }
//     }
//     while (i < m)
//         sum1 += ar1[i++];

//     while (j < n)
//         sum2 += ar2[j++];
 
//     result += max(sum1, sum2);
//     return result;
// }
// main(){
//     int t;
//     cin >> t;
//     int n, m;
//     while(t--){
//         cin >> n >> m;
//         int a[n],b[m];
//         for(int i=0;i<n;i++) cin >> a[i];
//         for(int i=0;i<m;i++) cin >> b[i]; 
//         cout<<maxPathSum(a,b,n,m)<<endl;
//     }
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// ll bcnn(ll a,ll b){
//     return a*b/__gcd(a,b);
// }
// ll chia(ll d){
//     ll t=0;
//     while(d){
//         t++;
//         d/=10;
//     }
//     return t;
// }
// int main(){
//     int t;
//     int x,y,z,n;
//     ll d;
//     cin>>t;
//     ll e,s=1,f;
//     while(t--){
//         s=1;
//         cin>>x>>y>>z>>n;
//         d=bcnn(bcnn(x,y),z);
//         f=pow(10,n-1);
//         e=(pow(10,n-1)/d)+1;
//         if(f%d==0) {cout<<f;s=0;}
//         e=e*d;
//         if(chia(e)==n&&s==1)  cout<<e;
//         else if(chia(e)!=n&&s==1) cout<<-1;
//         cout<<endl;
//     }
// }
/*
#include<iostream> 
#include<algorithm> 
#include<vector> //MATRIX2
using namespace std; 
void solve() { 
    int n; 
    cin >> n; 
    int a[100][100]; 
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < n; j++) 
        cin >> a[i][j];
    for (int i = 0; i < n; i++) 
        sort(a[i], a[i] + n); 
    int b[100] = {}, f = 0, count = 0; 
    for (b[0] = 0; b[0] < n; b[0]++) { 
        int value = a[0][b[0]]; 
        bool check = true; 
        for (int i = 1; i < n; i++) { 
            while (b[i] < n && a[i][b[i]] <= value)  b[i]++;
            if (a[i][b[i] - 1] != value) { 
                check = false; 
            } 
            if (b[i] == n) { 
                f = 1; break; 
            } 
        } 
        if (check) { 
            count++; 
        } 
        if (f == 1) 
        break; 
    } 
    cout << count << endl; 
} 
int main() { 
    int t; 
    cin >> t; 
    while (t--) 
        solve();     
    return 0; 
}*/
/*
#include<bits/stdc++.h>
using namespace std;//re11
int mi(int a[],int n){
    int lis[n],lds[n];
    int i=0,j=0;
    for (i = 0; i < n; i++) 
        lis[i] = 1; 
    for (i = 0; i < n; i++) 
        lds[i] = 1;

    
    for(i = 1;i < n; i++)
        for(j = 0;j < i; j++)
            if(a[i] > a[j] && lis[i] < lis[j] + 1)
                lis[i] = lis[j] + 1;
    for(i = n - 2;i >= 0; i--)
        for(j = n - 1;j > i; j--)
            if(a[i]>a[j]&&lds[i]<lds[j]+1)
                lds[i]=lds[j]+1;
    
    int Max = INT_MIN;
    for(i = 0;i < n; i++){
        if(lis[i] + lds[i] - 1 > Max){
            Max = lis[i] + lds[i] - 1;
        }
    }
    return Max;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        cout<<mi(a,n)<<endl;
    }
}*/