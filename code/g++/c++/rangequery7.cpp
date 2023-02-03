/*
#include<bits/stdc++.h>
using namespace std;
int smallestSubWithSum(int arr[], int n, int x) 
{  
    int curr_sum = 0, min_len = n+1; 
  
    int start = 0, end = 0; 
    while (end < n) 
    { 
        while (curr_sum <= x && end < n) 
            curr_sum += arr[end++]; 
  
        while (curr_sum > x && start < n) 
        { 
            if (end - start < min_len) 
                min_len = end - start; 
   
            curr_sum -= arr[start++]; 
        } 
    } 
    return min_len; 
} 
void solution(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int d=smallestSubWithSum(a,n,k);
    if(d>=n) cout<<-1<<endl;
    else
    cout<<d<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}*/
/*
#include<bits/stdc++.h>
using namespace std;
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
}*/
/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n;
        cin>>x;
        vector<int>v1(n,0);
        for(int i=0;i<n;i++){
            cin>>v1[i];
        } 
        deque<int>window;
        int minCount=INT_MAX;
        int currSum=0,count=0,i=0; 
        while(i<n) {
         if(currSum<=x){
                window.push_back(v1[i]);
                currSum+=v1[i];
                count++;
                
                if(currSum<=x){
                    i++;
                }
            }
            else{
                if(count<minCount)
                minCount=count;
                
                int temp=window.front();
                window.pop_front();
                count--;
                currSum=currSum-temp;
                
                if(currSum<=x) {
                    i++;
                } 
            }
        }
        if(minCount==INT_MAX) cout<<-1<<endl;
        else
        cout<<minCount<<"\n";  
    }
	return 0;
}*/
/*
#include<bits/stdc++.h>
using namespace std;
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
}*/