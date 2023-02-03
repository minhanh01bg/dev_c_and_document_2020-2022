/* cách 1*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, x, L, R;
        cin >> n;
        vector<int>A(n), B;
        for (int i = 0; i < n; i++) cin >> A[i];
        cin >> k >> x;
        auto it = lower_bound(A.begin(), A.end(), x);
        auto it1 = upper_bound(A.begin(), A.end(), x);
        L = it - A.begin();
        R = it1 - A.begin();
        if (A[L] == x && L >= 0) L--;
        while (k != 0) {
        if (L >= 0) {
            B.push_back(A[L--]);
            k--;
        }
        if (R <= n - 1) {
            B.push_back(A[R++]);
        k--;
        }
        if (L == -1 && R == n )
            break;
        }
        sort(B.begin(), B.end());
        for (int i = 0; i < B.size(); i++) {
            cout << B[i] << " ";
        }
        cout << endl;
    }
}
/*cách 2*/
#include<bits/stdc++.h>
using namespace std;
void mi(int a[],int n,int x,int k){
    int b[n],i=0;
    auto it = lower_bound(a,a+n, x);
    auto it1 = upper_bound(a, a+n, x);
    int l = it-a;
    int r = it1-a;
    if(a[l]==x) l--;
    while( k!=0){
        if(l>=0){
            b[i]=a[l--];
            i++;
            k--;
        }
        else {
            b[i]=a[r++];
            i++;
            k--;   
        }
        if(r < n){
            b[i]=a[r++];
            i++;
            k--;
        }
        else {
            b[i]=a[l--];
            i++;
            k--;
        }
    }
    sort(b,b+i);
    for(int y=0;y<i;y++) cout<<b[y]<<" ";
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    int n,x,k;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) 
            cin>>a[i];    
        
        cin>>k>>x;
        mi(a,n,x,k);
    }
}