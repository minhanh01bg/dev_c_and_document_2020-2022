#include<bits/stdc++.h>
#include<set>
using namespace std;
int removeDuplicates(string arr[], int n) 
{
    if (n==0 || n==1) 
        return n; 
  
    string temp[n]; 
    int j = 0; 
    for (int i=0; i<n-1; i++) 

        if (arr[i] != arr[i+1]) 
            temp[j++] = arr[i]; 
    temp[j++] = arr[n-1]; 
    for (int i=0; i<j; i++) 
        arr[i] = temp[i]; 
  
    return j; 
} 
void mi(string a,string b){
    string s[100]={""};
    int x=0;
    for(int i=0;i<a.length();i++){
        if(a[i]==' '&&a[i+1]!=' ') x++;
        if(a[i]!=' ') s[x]=s[x]+a[i];
    }
    string c[100]={""};
    int y=0;
    for(int i=0;i<b.length();i++){
        if(b[i]==' '&& b[i+1]!=' ') y++;
        if(b[i]!=' ') c[y]=c[y]+b[i];
    }
    int z=0;
    string d[100];
    int f=0;
    for(int i=0;i<=x;i++){
        z=0;
        if(s[i]!="")
        for(int j=0;j<=y;j++){
            if(s[i]==c[j]){
                z=1;
                break;
            } 
        }
        if(z==0) d[f++]=s[i];
    }
    sort(d,d+f);
    f=removeDuplicates(d,f+1);
    for(int i=0;i<f;i++) cout<<d[i]<<" ";
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    string a,b;
    cin.ignore();
    while(t--){
        getline(cin,a);
        getline(cin,b);
        mi(a,b);
    }
}