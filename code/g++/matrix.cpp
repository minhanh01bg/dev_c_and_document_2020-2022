#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        int a[100000],b[100000],n,m;
        cin >>n>>m;
        int c[100000]={0};
        for(int i =0 ; i <n ; i++){
            cin >>a[i];
            c[a[i]]++;
        }
        for(int i =0 ; i <m ; i++){
            cin >>b[i];
        }
        int index[10000]={0};
        index[0] =-1;
        int d[100000];
        int x =0;
        for(int i = 0 ; i<m  ; i++){
            for(int j = 0 ; j<n ; j++){
                if(b[i] == a[j]){
                    index[i+1] = j;
                    break;
                }
            }
            if(index[i+1] !=-1 ){
                if(index[i]>index[i+1]){
                    //c[b[i]]=1;
                    continue;
                }
                for(int k =0 ; k<c[b[i]] ; k++){
                    d[x] = b[i];
                    x++;
                }
                c[b[i]]=0;
            }
        }
        for(int i = 0 ; i<100000 ; i++){
            while(c[i] >= 1 ){
                d[x] = i;
                x++;
                c[i]--;
            }
        }
        for(int i = 0; i< x ; i++){
            cout <<d[i]<<" ";
        }
        cout <<endl;
    }
}

/*
#include<bits/stdc++.h>
using namespace std;
int main(){//matrix 18
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n][m];
        int b[n*m],o=0;
        for(int i=0;i<n;i++) 
            for(int j=0;j<m;j++)
                cin>>a[i][j];
        int x=0;
        if(n==m && n%2!=0) x=1;
        for(int i=0;i<n;i++){
            for(int j=i;j<m-i-1;j++) {
                if(a[i][j]!=-1){
                    b[o++]=a[i][j];
                    
                    a[i][j]=-1;
                }   
            }
            for(int j=i;j<n-i-1;j++) {
                if(a[j][m-i-1]!=-1){
                    b[o++]=a[j][m-i-1];
                    a[j][m-i-1]=-1;
                }
            }
            for(int j=m-i-1;j>i;j--) {
                if(a[n-i-1][j]!=-1){
                    b[o++]=a[n-i-1][j];
                    a[n-i-1][j]=-1;
                }
            }
            for(int j=n-i-1;j>i;j--) {
                if(a[j][i]!=-1){
                    b[o++]=a[j][i];
                    a[j][i]=-1;
                }
            }
        }
        if(x==1) b[o++]=a[n/2][n/2];
        for(int i=o-1;i>=0;i--) cout<<b[i]<<" ";
        cout<<endl;
    }
    return 0;
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
int n,a[100][100];//matrix7
void mi(){
    for(int i=0;i<n;i++){
            if(i%2==0) 
                for(int j=0;j<n;j++) 
                    cout<<a[i][j]<<" ";
            if(i%2) for(int j=n-1;j>=0;j--) 
                    cout<<a[i][j]<<" ";
        }
        cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        mi();
    }
    return 0;
}

*/
/*
#include<bits/stdc++.h>
using namespace std;
int n,a[100][100];
void input(){//matrix 6
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>a[i][j];
}
void output() {
    for(int i=0;i<n;i++){ 
        if(i==0||i==n-1) 
            for(int j=0;j<n;j++) 
                cout<<a[i][j]<<" ";
        else for(int j=0;j<n;j++)
                if(j==0||j==n-1) 
                    cout<<a[i][j]<<" ";
                    else cout<<"  ";
        
        cout<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        input();
        output();
        cout<<endl;
    }
}
*/
/*
#include<bits/stdc++.h>
using namespace std;//lưu giá trị mảng mới và duyệt 2 lần Matrix 10
int b[100][100],c[100][100];
void mi(int n,int m,int a[100][100]){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            c[i][j]=0;
        }
    }
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] == 1){
                for(int k=0;k<n;k++) 
                    c[k][j]=1;   
                for(int l=0;l<m;l++) 
                    c[i][l]=1;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<c[i][j]<<" ";
        }

        cout<<endl;
    }
}
int main(){
    int t,n,m,a[100][100];
    cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            } 
        }
        mi(n,m,a);
    }
    return 0;
}
*/
/*
#include<bits/stdc++.h>
using namespace std; 
using namespace std; //matrix 11
int R,C;
bool mat[100][100];
int maxArea(bool mat[100][100]) 
{    
    int hist[R + 1][C + 1]; 
  
    for (int i = 0; i < C; i++) { 
        hist[0][i] = mat[0][i]; 
  
        for (int j = 1; j < R; j++) 
            hist[j][i] = (mat[j][i] == 0) ? 0 : hist[j - 1][i] + 1; 
    } 
  
    for (int i = 0; i < R; i++) { 
        int count[R + 1] = { 0 }; 
        for (int j = 0; j < C; j++) 
            count[hist[i][j]]++; 
        int col_no = 0; 
        for (int j = R; j >= 0; j--) { 
            if (count[j] > 0) { 
                for (int k = 0; k < count[j]; k++) { 
                    hist[i][col_no] = j; 
                    col_no++; 
                } 
            } 
        } 
    } 
    int curr_area, max_area = 0; 
    for (int i = 0; i < R; i++) { 
        for (int j = 0; j < C; j++) { 
            curr_area = (j + 1) * hist[i][j]; 
            if (curr_area > max_area) 
                max_area = curr_area; 
        } 
    } 
    return max_area; 
} 
int main(){
    int t;
    cin>>t;
    int n, m;
    while(t--){
        cin >> m >> n;
        R=m,C=n;
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                cin>>mat[i][j];
        
        cout<<maxArea(mat)<<endl;

    }
}*/
/*
#include<bits/stdc++.h>
using namespace std;
int main() {//matrix5
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
}*/
/*
#include<bits/stdc++.h>
using namespace std;
int main(){//matrix 3
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n][m];
        int b[n*m],o=0;
        for(int i=0;i<n;i++) 
            for(int j=0;j<m;j++)
                cin>>a[i][j];
        int x=0;
        if(n==m && n%2!=0) x=1;
        for(int i=0;i<n;i++){
            for(int j=i;j<m-i-1;j++) {
                if(a[i][j]!=-1){
                    b[o++]=a[i][j];
                    
                    a[i][j]=-1;
                }   
            }
            for(int j=i;j<n-i-1;j++) {
                if(a[j][m-i-1]!=-1){
                    b[o++]=a[j][m-i-1];
                    a[j][m-i-1]=-1;
                }
            }
            for(int j=m-i-1;j>i;j--) {
                if(a[n-i-1][j]!=-1){
                    b[o++]=a[n-i-1][j];
                    a[n-i-1][j]=-1;
                }
            }
            for(int j=n-i-1;j>i;j--) {
                if(a[j][i]!=-1){
                    b[o++]=a[j][i];
                    a[j][i]=-1;
                }
            }
        }
        if(x==1) b[o++]=a[n/2][n/2];
        for(int i=o-1;i>=0;i--) cout<<b[i]<<" ";
        cout<<endl;
    }
    return 0;
}*/
/*
#include<bits/stdc++.h>
using namespace std;
int main(){//matrix 20
    int t;
    cin>>t;
    while(t--){
        int n, m, k;
        cin >> n >> m >> k;
        int a[n][m];
        for(int i=0;i<n;i++) 
            for(int j=0;j<m;j++)
                cin>>a[i][j];
        int x=0,d=1;
        if(n==m && n%2!=0) x=1;
        for(int i=0;i<n;i++){
            for(int j=i;j<m-i-1;j++) {
                if(a[i][j]!=-1){
                    if(d==k) cout<<a[i][j]<<" ";
                    d++;
                    a[i][j]=-1;
                }   
            }
            for(int j=i;j<n-i-1;j++) {
                if(a[j][m-i-1]!=-1){
                    if(d==k) cout<<a[j][m-i-1]<<" ";
                    
                    d++;
                    a[j][m-i-1]=-1;
                }
            }
            for(int j=m-i-1;j>i;j--) {
                if(a[n-i-1][j]!=-1){
                    if(d==k) cout<<a[n-i-1][j]<<" ";
                    d++;
                    a[n-i-1][j]=-1;
                }
            }
            for(int j=n-i-1;j>i;j--) {
                if(a[j][i]!=-1){
                    if(d==k) cout<<a[j][i]<<" ";
                    d++;
                    a[j][i]=-1;
                }
            }
        }
        if(x==1) {
            if(d==k)
            cout<<a[n/2][n/2];
            d++;
        }
        cout<<endl;
    }
    return 0;
}*/
/*
#include<bits/stdc++.h>
using namespace std;//matrix 1
void rotatematrix(int m, int n, int mat[100][100]) 
{ 
    int row = 0, col = 0; 
    int r = m,l=n;
    int prev, curr; 

    while (row < m && col < n) 
    { 
  
        if (row + 1 == m || col + 1 == n) 
            break; 
  
        prev = mat[row + 1][col]; 
  
        for (int i = col; i < n; i++) 
        { 
            curr = mat[row][i]; 
            mat[row][i] = prev; 
            prev = curr; 
        } 
        row++; 
        for (int i = row; i < m; i++) 
        { 
            curr = mat[i][n-1]; 
            mat[i][n-1] = prev; 
            prev = curr; 
        } 
        n--; 
        if (row < m) 
        { 
            for (int i = n-1; i >= col; i--) 
            { 
                curr = mat[m-1][i]; 
                mat[m-1][i] = prev; 
                prev = curr; 
            } 
        } 
        m--; 
        if (col < n) 
        { 
            for (int i = m-1; i >= row; i--) 
            { 
                curr = mat[i][col]; 
                mat[i][col] = prev; 
                prev = curr; 
            } 
        } 
        col++; 
    }
    for (int i=0; i<r; i++) { 
        for (int j=0; j<l; j++) 
          cout << mat[i][j] << " "; 
          
    } 
} 
int main(){
    int t;
    cin >>t;
    int a[100][100],n,m;
    while(t--){
        cin >>n >>m;
        for(int i = 0 ; i <n ; i++){
            for(int j = 0 ;j<m ; j++){
                cin >>a[i][j];
            }
        }
        rotatematrix(n,m,a);
        cout <<endl;
    }
}

*/
