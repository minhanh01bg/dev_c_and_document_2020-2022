#include <bits/stdc++.h>
using namespace std;
bool fcompare(pair<int, pair<int, int> > p,pair<int, pair<int, int> > p1)
{
    if (p.second.second != p1.second.second)
        return (p.second.second > p1.second.second);
    else
        return (p.second.first < p1.second.first);
}
void sortByFrequency(int arr[], int n)
{
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
    unordered_map<int, pair<int, int> > hash; 
    for (int i = 0; i < n; i++) {
        if (hash.find(arr[i]) != hash.end())
            hash[arr[i]].second++;//đếm số phần tử của arr[i]
        else
            hash[arr[i]] = make_pair(i, 1);//khởi tạo =1 để đếm và chỉ lưu vị trí đầu tiên của số arr[i] là i
    } 
    
    for (int i = 0; i < n; i++) {
            
        
        cout<<hash[arr[i]].first<<" ";
    } 
    cout<<endl;
    for (int i = 0; i < n; i++) {
            
        
        cout<<hash[arr[i]].second<<" ";
    } 
    auto it = hash.begin();
    cout<<endl;
 
    vector<pair<int, pair<int, int> > > b;
    for (it; it != hash.end(); ++it)
        b.push_back(make_pair(it->first, it->second));//fisrt save value
                                                      // second lưu số phần tử
    
    sort(b.begin(), b.end(), fcompare);
 
    for (int i = 0; i < b.size(); i++) {
        int count = b[i].second.second;
        while (count--)
            cout << b[i].first << " ";
    }
}
int main()
{
    int arr[] = { 2, 5, 2, 6, -1, 9999999, 5, 8, 8, 8 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    sortByFrequency(arr, n);
 
    return 0;
}