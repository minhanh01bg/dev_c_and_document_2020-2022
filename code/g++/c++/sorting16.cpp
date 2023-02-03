// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin >>t;
//     while(t--){
//         int n;
//         cin >>n;
//         int a[n];
//         map<int, int> b;
//         for(int i =0 ;i <n ; i++){
//             cin >>a[i];
//             b[a[i]]++;
//         }
//         int c[10000];
//         int k=0;
//         int d[10000];
//         map<int, int>::iterator pos;
//         for( pos = b.begin() ; pos!= b.end() ; pos++){
//             c[k] = pos->second;
//             d[k] = pos->first;
//             k++;
//         }
//         for(int i =0 ; i <k-1 ; i++){
//             for(int j = i+1 ; j<k ; j++){
//                 if(c[i] < c[j]){
//                     swap(c[i],c[j]);
//                     swap(d[i],d[j]);
//                 }
//                 if( c[i] == c[j] && d[i] >d[j]){
//                     swap(d[i],d[j]);
//                 }
//             }
//         }
//         int p =0 ;
//         while(p<k){
//             for(int j = 1 ; j <= c[p]  ; j++){
//                 cout << d[p]<<" ";
//             }
//             p++;
//         }
//         cout <<endl;
//     }
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        map<int,int>b;
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[a[i]]++;
        }
        int c[10000],d[10000],k=0;
        for(auto i:b){
            c[k]=i.second;
            d[k]=i.first;
            k++;
        }
        for(int i = 0;i < k - 1; i++){
            for(int j = i + 1;j < k; j++){
                if(c[j] > c[i]){
                    swap(c[i], c[j]);
                    swap(d[i], d[j]);
                    
                }
                if(c[i] == c[j] && d[i] > d[j]){
                    swap(d[i], d[j]);
                }
            }
        }
        int count=0;
        for(int i=0;i<k;i++){
            count=c[i];
            while(count--){
                cout<<d[i]<<" ";
            }
        }
        cout<<endl;
    }
}
/*
#include<bits/stdc++.h>
using namespace std;
int n;
bool fcompare(pair<int, pair<int, int> > p, pair<int, pair<int, int> > p1) {   
   if (p.second.second != p1.second.second)   
       return (p.second.second > p1.second.second);   
   else
       return (p.first < p1.first);
}
void solution(){
    cin>>n;
    int a[n];
    for(int i = 0;i < n; i++) cin >> a[i];
    map<int ,pair<int,int> > hash;
    for (int i = 0; i < n; i++) { 
        if (hash.find(a[i]) != hash.end()) 
            hash[a[i]].second++; 
        else
            hash[a[i]] = make_pair(i, 1); 
    }
    // for(int i = 0;i < n; i++){
    //     cout<<hash[a[i]].first<<" "<<hash[a[i]].second<<" ";//pair 1, pair 2
        
    //     cout<<endl;
    // }
    auto it=hash.begin();
    
    vector<pair<int,pair<int,int> > > c;

    for(it;it!=hash.end();it++)
        c.push_back(make_pair(it->first,it->second));
    
    sort(c.begin(),c.end(),fcompare);

    for(int i=0;i<c.size();i++){
        int count=c[i].second.second;
        while(count--){
            cout<<c[i].first<<" ";
        }
    }
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--)
        solution();
    return 0;
}*/