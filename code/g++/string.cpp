/*
#include<bits/stdc++.h> 
using namespace std; //string 19
#define ll long long

ll countDivisibleSubseq(string str, int n) 
{ 
    int len = str.length(); 
  
    ll dp[len][n]; 
    memset(dp, 0, sizeof(dp)); 

    dp[0][(str[0]-'0')%n]++; 
    
    for (int i=1; i<len; i++) { 

        dp[i][(str[i]-'0')%n]++; 
        
        for (int j=0; j<n; j++) {  
            dp[i][j] += dp[i-1][j];

            dp[i][(j*10 + (str[i]-'0'))%n] += dp[i-1][j]; 

        }
    } 
    return dp[len-1][0]; 
} 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string str;
        cin>>str;
        cout<<countDivisibleSubseq(str,m)<<endl;
        
    }
}*/
/*
#include<bits/stdc++.h>
using namespace std;//string 13
int main(){
    int test;
    cin >> test;
    string str;
    int k;
    while(test--){
        cin >> str >> k;
        int d=0,x=0;
        for(int i=0;i<str.size();i++){
            map<char,int>mp;
            x=0;
            for(int j=i;j<str.size();j++){
                mp[str[j]]++;
                x = mp.size();
                if(x==k) d++;
                if(x>k) break;
            }
        }
        cout<<d<<endl;
    }
}*/

/*
#include<bits/stdc++.h>

using namespace std; //string 12

const int MAX_CHARS = 256; 

int my(string str){
    map<char, int>mp;
    int n = str.length();
    int dist_count = 0;
    for(int i = 0;i < n;i++) 
        mp[str[i]]++;
    dist_count = mp.size();

    string res,ans;
    int size = INT_MAX;
    int count=0;
    for(int i = 0;i < n; i++){
        int vis[256] = {0};
        res = "";
        count = 0;
        for(int j = i;j < n; j++){
            if(vis[str[j] - '0']==0){
                vis[str[j]-'0'] = 1;
                count++;
            }
            res.push_back(str[j]);
            if(count == dist_count) break;
        }
        if(count == dist_count && res.length() < size) {
            ans = res;
            size = res.length();
        }
    }
    return ans.length();
}
int main(){
    int test;
    cin >> test;
    string str;
    while(test--){
        cin >> str;
        cout<<my(str)<<endl;
    }
}
*/
/*
#include<string>
#include<iostream>
#include<map>
#include<set>//string 12
using namespace std;
bool myy(string str1,string str2){
    map<char, int>mpstr1, mpstr2;
    for(int i=0;i<str2.size();i++) mpstr2[str2[i]]++;

    for(int i=0;i<str1.size();i++) mpstr1[str1[i]]++;
    
    for(map<char,int>::iterator it = mpstr2.begin();it != mpstr2.end(); it++){
        if(mpstr1[it->first] < mpstr2[it->first]) return false;
    }
    return true;
}
string my(string str){
    map<char,int>mpstr;
    string sets;
    for(int i = 0;i < str.length(); i++){
        mpstr[str[i]]++;
        if(mpstr[str[i]]==1) sets.push_back(str[i]);
    }
    return sets;
}
int main() {
    int test;
    cin >> test;
    while(test--) {
        string str;
        cin >> str;
        int ml = str.size();
        int end=0,start=0;
        string res="";
        string x=my(str);
        while(end<str.size()){
            res=res+str[end];
            while(myy(res,x)==true){  
                int d=res.size(); 
                ml=min(ml,d);   
                res.erase(0);
            }
            end++;
        }
        cout << ml << endl;
        
    }
    return 0;
}

*/
/*
#include<bits/stdc++.h> 
using namespace std; //string 11
  
const int no_of_chars = 256; 
  
// Function to find smallest window containing 
// all characters of 'pat' 
string findSubString(string str, string pat) 
{ 
    int len1 = str.length(); 
    int len2 = pat.length(); 
  
    // check if string's length is less than pattern's 
    // length. If yes then no such window can exist 
    if (len1 < len2) 
    { 
        cout << "-1"; 
        return ""; 
    } 
  
    int hash_pat[no_of_chars] = {0}; 
    int hash_str[no_of_chars] = {0}; 
  
    // store occurrence ofs characters of pattern 
    for (int i = 0; i < len2; i++) 
        hash_pat[pat[i]]++; 
  
    int start = 0, start_index = -1, min_len = INT_MAX; 
  
    // start traversing the string 
    int count = 0; // count of characters 
    for (int j = 0; j < len1 ; j++) 
    { 
        // count occurrence of characters of string 
        hash_str[str[j]]++; 
  
        // If string's char matches with pattern's char 
        // then increment count 
        if (hash_pat[str[j]] != 0 && 
            hash_str[str[j]] <= hash_pat[str[j]] ) 
            count++; 
  
        // if all the characters are matched 
        if (count == len2) 
        { 
            // Try to minimize the window i.e., check if 
            // any character is occurring more no. of times 
            // than its occurrence in pattern, if yes 
            // then remove it from starting and also remove 
            // the useless characters. 
            while ( hash_str[str[start]] > hash_pat[str[start]] 
                || hash_pat[str[start]] == 0) 
            { 
  
                if (hash_str[str[start]] > hash_pat[str[start]]) 
                    hash_str[str[start]]--; 
                start++; 
            } 
  
            // update window size 
            int len_window = j - start + 1; 
            if (min_len > len_window) 
            { 
                min_len = len_window; 
                start_index = start; 
            } 
        } 
    } 
  
    // If no window found 
    if (start_index == -1) 
    { 
    cout << "-1"; 
    return ""; 
    } 
    return str.substr(start_index, min_len); 
} 
int main() 
{   
    int test; cin>>test;
    while(test--){
        string str; 
        string pat; 
        cin >> str >> pat;
        cout<< findSubString(str, pat)<<endl; 
    }
    return 0; 
} 
/*
#include<bits/stdc++.h>
using namespace std;//string 11
//hàm kiểm tra xem str1 có đủ kí tự của str2 hay k
bool my(string str1,string str2){
    map<char,int >mpstr1,mpstr2;
    for(int i=0;i<str2.size();i++) mpstr2[str2[i]]++;//đếm số kí tự trong str2

    for(int i=0;i<str1.size();i++) mpstr1[str1[i]]++;//đếm số kí tự trong str1

    for(map<char,int>::iterator it = mpstr2.begin();it!=mpstr2.end();it++){
        // cout<<mpstr1[it->first]<<" "<<mpstr2[it->first]<<endl;
        if(mpstr1[it->first] < mpstr2[it->first]) return false;//nếu str2 có 2 kí tự này('a') thì str1 cũng phải có ít nhất 2 kí tự này('a')
        }
    return true;
}
int main(){
    int test;
    cin>>test;
    
    while(test--){
        string str1,str2;
        cin>>str1>>str2;
        string ans;
        int min=101,check=0;
        for(int i = 0;i < str1.length(); i++){
            string res;
            for(int j = i;j < str1.length(); j++){
                res.push_back(str1[j]);
                if(my(res,str2)==true && res.length()<min){
                    ans=res;
                    min=res.length();   
                    check=1;
                }
            }
        }
        if(check==1) cout<<ans;
        else cout<<-1;
        cout<<endl;
    }
    return 0;
}*/
/*
#include<bits/stdc++.h>
using namespace std;
int main(){//xoa chuoi con
    string s,sub; // khởi tạo 2 biến string s,sub;
    getline(cin,s); // hàm nhập chuỗi mẹ
    getline(cin,sub);// hàm nhập chuỗi con
    int pos=s.find(sub);// trả về vị trí đầu tiên xuất hiện của chuỗi con trong chuỗi mẹ
    s.erase(pos,sub.size());//xoa đi chuỗi con trong chuỗi mẹ
    cout<<s<<endl;// xuất ra chuỗi mẹ sau khi xóa chuỗi con
}*/
/*
#include<string>
#include<iostream>

using namespace std;//string 

bool mi(string str){
    int d=0,s=0;
    int e=0;
    for(int i=str.length()-1;i>=0;i--){
        if(str[i]-'0' == 1) {
            e=1;
            for(int j=0;j<d;j++){
                e=(e*2)%5;
            }      
            s+=e%5;
        }
        d++;
    }
    if(s%5==0) return 1;
    return 0;
}
int main(){
    int t;
    cin>>t;
    string str;
    while(t--){
        cin>>str;
        mi(str) ? cout<<"Yes":cout<<"No";
        cout<<endl;
    }
}*/
/*
#include<string>
#include<iostream>
using namespace std;//string 2
bool mi(string str){
    long long sum=0;
    for(int i=0;i<str.length();i++){
        sum = (sum * 10 + str[i]-'0')%11;
    }
    if(sum == 0) return true;
    return false;
}
int main(){
    int t;
    cin>>t;
    string str;
    cin.ignore();
    while(t--){
        cin >> str;
        cout << mi(str) << endl;
    }
}*/
// #include<map>
// #include<iostream>
// #include<string>
// using namespace std;//string 1
// bool mi(string str,int k){
//     if(str.length()<26) return false;
//     map<char,int>x;
//     int dem=0;
//     for(int i=0;i<str.length();i++){
//         x[str[i]]++;
//         if(x[str[i]]==1) dem++;
//     }
//     if(26-dem<=k) return true;
//     return false;

// }
// int main(){
//     int t;
//     cin>>t;
//     string str;
//     int k;
    
//     while(t--){
//         cin.ignore();
//         getline(cin,str);
//         cin>>k;
//         cout<<mi(str,k)<<endl;

//     }
// }