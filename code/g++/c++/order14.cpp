#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define EL printf("\n")
#define pb push_back
#define mp make_pair
#define ep emplace_back
#define X  first
#define Y  second
#define fillchar(a) memset(a, 0, sizeof(a))
#define FOR(i,l,r) for (int i=l;i<=r;i++)
#define FORD(i,r,l) for (int i=r;i>=l;i--)
#define run() int t;cin>>t;while(t--)
#define endl "\n"
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define init() int n;cin>>n; 
/*
int removeDuplicates(int arr[], int n)  { 
    if (n==0 || n==1) 
        return n; 
    int j = 0; 
    FOR(i,0,n-1) 
        if (arr[i] != arr[i+1]) 
            arr[j++] = arr[i]; 
    arr[j++] = arr[n-1]; 
    return j; 
}*/ /*
int binarySearch(int arr[], int n, int x) {
    int r = n - 1,l = 0, mid; 
    while (r >= l) {
        mid = l + (r - l) / 2;  
        if (arr[mid] == x) 
            return mid;
        if (arr[mid] > x) 
            r = mid - 1;
        if (arr[mid] < x) 
            l = mid + 1;
    }
    return -1;
}*/
int main(){
    fast()
    run(){
        init()
        int a[n], b[n];
        FOR(i,0,n-1){
            cin >> a[i];
            b[i] = a[i];
        }
        sort (b, b + n);
        // int x = removeDuplicates(b,n), max = b[n-1], index = 0;
        int index=0;
        FOR(i,0,n-1){
            index=upper_bound(b,b+n,a[i])-b;

            if(a[i] < b[index] && index != n){
                cout << b[index] << " ";
            }
            else cout << "_" << " ";
        }
        cout<<endl;
    }
}
/*
int main(){
    fast()
    run(){
        init()
        int a[n], b[n];
        FOR(i, 0, n-1) {
            cin >> a[i];
            b[i] = a[i];
        }   
        sort (b, b + n);
        int x = removeDuplicates(b,n), max = b[n-1], index = 0;
        FOR(i, 0, n-1){
            index = binarySearch(b, x, a[i]);
            if(b[index] != max)
                cout << b[index+1] << " ";
            else cout << "_" << " ";
        }
        cout<<endl;
    }
    return 0;
}*/