#include<bits/stdc++.h>
using namespace std;
int my(int a[],int n){
    int res=0,count=0;//range query 9
    bool x;
    while(1){
        count=0,x=true;
        for(int i=0;i<n;i++) {
            if(a[i] & 1){
                x=false;
                a[i]-=1;
                res++;
            }
            else if(a[i]==0) count++;
        }
        if(count==n) return res;
        if(x){
            for(int i=0;i<n;i++) 
                a[i]/=2;
            res++;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        cout<<my(a,n);
        cout<<endl;
    }
}