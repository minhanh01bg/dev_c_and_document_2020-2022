#include<iostream>
#include<string>
using namespace std;
string str;
int maxlen = 0;
class len{
public:
    int mi(){
        long y=str.find("100");
        while(y!=-1){
            str.erase(y,3);
            maxlen+=3;
            y=str.find("100");
        }
        return maxlen;
    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>str;
        len s;
        cout<<s.mi()<<endl;
    }
    return 0;
}