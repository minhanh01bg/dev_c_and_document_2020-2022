#include<bits/stdc++.h>
using namespace std;
int mi(int a[], int n){
    int l=0,r=n-1;
    int count=0;
    while(l<=r){
        if(a[l]==a[r]){
            l++;
            r--;
            continue;
        }
        if(a[l]<a[r]){
            a[l+1]=a[l]+a[l+1];
            count++;
            l++;
        }
        if(a[l]>a[r]){
            a[r-1]+=a[r];
            count++;
            r--;
        }
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