
/*
#include<bits/stdc++.h>
using namespace std;//Range Query 7
int sol(int a[],int n,int k){
    int sumcurr=0,end=0,start=0,ml=100000;
    while(end<n){
        sumcurr+=a[end++];
        while(sumcurr > k){
            sumcurr-=a[start];
            ml=min(ml,end-start);
            start++;
        }
    }
    if(ml==100000) return -1;
    return ml;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        cout<<sol(a,n,k)<<endl;
    }
}
*/

/*
#include<bits/stdc++.h>
using namespace std;//Range Query 7
int smallestSubarray(int arr[], int n, int k){
    int windowSum = 0;
 
    int len = INT_MAX;
 
    int left = 0;
 
    for (int right = 0; right < n; right++) {
        windowSum += arr[right];
  
        while (windowSum > k && left <= right){
            len = min(len, right - left + 1);

            windowSum -= arr[left];
            left++;
        }
    }
    if(len==INT_MAX) return -1;
    return len;
}
void solution(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int d=smallestSubarray(a,n,k);
    cout<<d<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}
*/
/*
#include<iostream> 
#include<climits> //Range Query 8
using namespace std;
int maxSubArraySum(int a[], int size,int k) 
{ 
    long long sum = 0;
    for(int i = 0;i < k; i++){
        sum+= a[i];
    }
    long long max_sum = sum, max_end = k-1;
    for(int i = k;i < size; i++){
        sum=sum+a[i]-a[i-k];
        if(sum>max_sum){
            max_sum=sum;
            max_end=i;
        }
    }
    return max_end-k+1;
} 
int main() 
{ 
    int t;
    cin>>t;
    int n, k;
    while(t--){
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int d=maxSubArraySum(a,n,k);
        for(int i=d;i<d+k;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0; 
}
*/
/*
#include<bits/stdc++.h>
using namespace std;//Range Query 10
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

*/

/*
#include<bits/stdc++.h>
using namespace std;//Range Query 6
long long mi(int a[],int n) {
    long long l[n]={0};
    l[0]=a[0];
    for(int i = 1;i < n; i++){
        l[i] = a[i];
        for(int j = 0;j < i; j++){
            if(a[i]>a[j]&& l[i] < l[j] + a[i]){
                l[i]=l[j]+a[i];
            }
        }
    }
    return *max_element(l,l+n);
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
*/
/*
#include<iostream> 
#include<climits> 
using namespace std;//	Range Query 4
long long maxSubArraySum(int a[], int size) 
{ 
    long long max_so_far = INT_MIN, max_ending_here = 0; 
  
    for (int i = 0; i < size; i++) 
    { 
        max_ending_here = max_ending_here + a[i]; 
        if (max_so_far < max_ending_here) 
            max_so_far = max_ending_here; 
  
        if (max_ending_here < 0) 
            max_ending_here = 0; 
    } 
    return max_so_far; 
} 
int main() 
{ 
    int t;
    cin>>t;
    int n;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        cout<<maxSubArraySum(a,n)<<endl;
    }
    return 0; 
}
*/
/*
#include<bits/stdc++.h>
using namespace std;//Range Query 3
bool mi(int n){
    if(n<2) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int t;
    long long n,m;
    cin>>t;
    int d;
    while(t--){
        cin>>n>>m;
        d=0;
        for(int i=n;i<=m;i++){
            if(mi(i)){
                d++;
            }
        }
        cout<<d<<"\n";
    }
    return 0;
}
*/

/*
#include<bits/stdc++.h>
using namespace std;//Range Query 2
bool mi(int a[],int n,int x,int y){
    int d=0,e=0,u=0;
    if(x==y) return true;
    for(int i=x ; i<y; i++){
        
        if(a[i]<a[i+1]) u=1;
    }
    if(u==0) return true;
    for(int i=x; i<=y-1; i++){
        e=1;
        if(a[i] > a[i+1]) {
            d=i;
            break;
        }
    }
    
    if(e==1&&d==0) return true;
    for(int i=d;i<=y-1;i++){
        if(a[i] < a[i+1]) return false;
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    int n=0,x=0,y=0;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        cin>>x>>y;
        if(mi(a,n,x,y)==true) cout<<"Yes";
        else cout<<"No";
        cout<<endl;
    }
}
*/
/*
#include<bits/stdc++.h>
using namespace std;//Range Query 12
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        int max=1,k=0;
        for(int i=0;i<n;i++){
            int x=0,y=0;
            for(int j=i;j<n;j++){
                x+= a[j]; y+= b[j];
                if(x==y) k=j-i+1;
            }
        if(k>max) max=k; 
        }
    cout<<max<<endl;
    } 
    return 0;  
}
*/
/*
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
*/
/*
#include <bits/stdc++.h> 
using namespace std;
int my(int arr[], int n) { //range query 5
    if (n <= 1)  return 0; 
    if (arr[0] == 0)  return -1; 
    int maxReach = arr[0], step = arr[0], jump = 1, i = 1; 
    for (i = 1; i < n; i++) {  
        if (i == n - 1) return jump; 
        // cout<<maxReach<<" "<<step<<" \\ ";
        maxReach = max(maxReach, i + arr[i]); 
        
        step--;  
  
        if (step == 0) { 
            jump++; 
            if (i >= maxReach) 
                return -1; 
            step = maxReach - i; 
        } 
    }
    return -1; 
} 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        cout<<my(a,n)<<endl;
    }
}*/
/*
#include<bits/stdc++.h>
using namespace std;//Range Query 11
int main(){
    int t,n,a[1000], maxx;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int Min=INT_MAX;
        for (size_t i = 0; i < n-1; i++)
        {
            for (size_t j = i+1; j < n; j++)
            {
                Min=min(Min,abs(a[i]-a[j]));
            }
        }
        cout<<Min;
        cout<<endl;
    }
    return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;//Range Query 1
int mi(int n,int a[10000],int b,int c){
    int s=0;
    for(int i=b-1;i<c;i++){
        s+=a[i];
    }
    return s;
}
int main(){
    int t,n,a[10000],m,b,c;
    cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=0;i<n;i++){
            cin>>a[i];
            
        }
        while(m--){
            cin>>b>>c;
            cout<<mi(n,a,b,c);
            cout<<endl;
        }
        
    }
}*/