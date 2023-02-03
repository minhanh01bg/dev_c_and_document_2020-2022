#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n][n];
        int b[n], c[n];
        for(int i = 0;i < n; i++) b[i]=0;
        for(int i = 0;i < n; i++) c[i]=0;
        for(int i = 0;i < n; i++){
            for(int j = 0;j < n; j++){
                cin >> a[i][j];
                b[i] += a[i][j];
                c[j] += a[i][j];
            }
        }
        int MAX = 0;
        for(int i = 0;i < n; i++) MAX = max(MAX, b[i]);
        for(int i = 0;i < n; i++) MAX = max(MAX, c[i]);
        int sum = 0;
        for(int i = 0;i < n; i++) sum += MAX - b[i];                  
        cout<<sum<<endl;
    }
}