// #include<bits/stdc++.h>
// using namespace std;
// int mi(int a[],int n){
//     int b[n+1];
//     for(int i=0;i<n+1;i++) b[i]=INT_MIN;
//     for(int i=n-1;i>=0;i--){
//         b[i]=max(b[i+1],a[i]);
//     }
//     int result=0;
//     for(int i=0;i<n;i++){
//         int l=i+1,r=n-1,ans=i;
//         while(l<=r){
//             int mid=l+(r-l)/2;
//             if(a[i]<=b[mid]){
//                 ans=max(ans,mid);
//                 l=mid+1;
//             }
//             else r = mid-1;
//         }
//         result=max(ans-i,result);
//     }
//     return result;
// }
// int main(){
//     int t;
//     cin>>t;
//     int n;
//     while(t--){
//         cin>>n;
//         int a[n];
//         for(int i=0;i<n;i++) cin>>a[i];
//         cout<<mi(a,n)<<endl;
//     }
// }

/*#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    int n;
    while(t--){
        cin>>n;
        vector<long long int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        vector<long long int> maxFromEnd(n + 1, INT_MIN);
    
        for (int i = v.size() - 1; i >= 0; i--) {
            maxFromEnd[i] = max(maxFromEnd[i + 1], v[i]);
        }
        int result = 0;
    
        for (int i = 0; i < n; i++) {
            int low = i + 1, high = n - 1, ans = i;
    
            while (low <= high) {
                int mid = (low + high) / 2;
                if (v[i] <= maxFromEnd[mid]) {
                    ans = max(ans, mid);
                    low = mid + 1;
                }
                else {
                    high = mid - 1;
                }
            }
            result = max(result, ans - i);
        }
        cout << result << endl;
    }
}*/