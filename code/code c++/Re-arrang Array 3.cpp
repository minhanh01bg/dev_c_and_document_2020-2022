#include<bits/stdc++.h>
using namespace std;
int mi(int a[],int n,int k){
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]<=k) count++;
    }
    int bad=0;
    for(int i=0;i<count;i++){
        if(a[i]>k) bad++;
    }
    int ans=bad;
    for(int i = 0,j = count;j < n;j++, i++){
        if(a[i]>k) bad--;
        if(a[j]>k) bad++;
        ans=min(bad,ans);
    }   
    return ans;
}
int main(){
    int t;
    cin>>t;
    int n, k;
    while(t--){
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        cout<<mi(a,n,k)<<endl;
    }
    return 0;
}


