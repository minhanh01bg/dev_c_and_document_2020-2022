#include<iostream> 
#include<climits> 
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