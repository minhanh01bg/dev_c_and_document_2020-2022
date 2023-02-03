#include<bits/stdc++.h>
using namespace std;
int minSwaps(int arr[], int n) {
    pair<int, int> arrPos[n];
    for (int i = 0; i < n; i++) {
        arrPos[i].first = arr[i];
        arrPos[i].second = i;
    }
    sort(arrPos, arrPos + n);
    vector<bool> vis(n, false);
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (vis[i] || arrPos[i].second == i)
            continue;
        // tìm ra số lượng nút trong
         // chu trình này và thêm vào ans
        int cycle_size = 0;
        int j = i;
        while (!vis[j]) {
            vis[j] = 1;
            // chuyển đến nút tiếp theo
            j = arrPos[j].second;
            cycle_size++;
        }
        // Cập nhật câu trả lời bằng cách thêm chu kỳ hiện tại. 
        if (cycle_size > 0) {
            ans += (cycle_size - 1);
        }
    }
    return ans;
}
int main(){
    int arr[] = {1, 5, 4, 3, 2};
    int n = (sizeof(arr) / sizeof(int));
    cout << minSwaps(arr, n);
    return 0;
}
/*
#include<bits/stdc++.h>
using namespace std;
int n,B;
int fotp;
int a[100];
int c[100];
int x[100];
int xp[100];
bool ktr(){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=a[i]*xp[i];
        if(sum>=B) return false;
    }
    return true;
}
int gtr(){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=c[i]*xp[i];
    }
    return sum;
}
void update(int value){
    fotp=value;
    for(int i=1;i<=n;i++) x[i]=xp[i];
}
void Try(int i){
    for(int j=0;j<=1;j++){
        xp[i]=j;
        if(i==n){
            if(ktr()){
                int value = gtr();
                if(value>fotp)
                update(value);
                
            }
        }else{
            Try(i+1);
        }
    }
}
int main(){
    cin>>n>>B;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++) cin>>c[i];
    Try(1);
    cout<<fotp<<endl;
    for(int i=1;i<=n;i++) cout<<x[i]<<" ";
    cout<<endl;
}*/