#include<iostream>
#include<string>//large number 1
using namespace std;
string mi(string a,string b){
    while(a.size()<b.size()) a="0"+a;
    while(a.size()>b.size()) b="0"+b;
    if(a<b) a.swap(b);
    int nho=0;
    string res="";
        nho=0;
    for(int i=a.length()-1;i>=0;i--){
        int so = int(a[i]-'0') - int(b[i]-'0') - nho;
        if(so<0){
            res = char(so+10+'0') + res;
            nho = 1;
        }
        else res = char(so+'0') + res;
    }
    return res;
}
int main(){
    int t;
    cin>>t;
    string a,b;
    while(t--){
        cin>>a>>b;
        cout<<mi(a,b)<<endl;;
    }
}
/*
#include<bits/stdc++.h>
#include<string>//large number 2
using namespace std;
string mi(string a, string b){
    while(a.size()<b.size()) a="0"+a;
    while(a.size()>b.size()) b="0"+b;
    int nho = 0;
    string res="";
    for(int i= a.length()-1; i>=0 ;i--){
        int so= int (a[i]-'0')+int(b[i]-'0')+nho;
        nho=0;
        if(so>=10){
            res = char(so-10+'0')+res;
            nho = 1;
        }
        else res=char(so+'0')+res;
    }
    if(nho!=0) res='1'+res;
    return res;
}
int main(){
    int t;
    cin>>t;
    string a,b;
    while(t--){
        cin>>a>>b;
        cout<<mi(a,b)<<endl;
    }
}*/
