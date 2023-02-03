#include<bits/stdc++.h>
using namespace std;
long long n,a[100];//Re-arrang Array 1
void fun(){
    long long t;
    for(int i=0;i<n;i++) a[i]=-1;
    for(int i=0;i<n;i++){
        cin>>t; 
        if(t>=0&&t<n) a[t]=t;
    }
}
int main(){
    int x;
    long long t,i;
    cin>>x;
    while(x--){
        cin>>n;
        fun();
        for(i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<"\n";
 