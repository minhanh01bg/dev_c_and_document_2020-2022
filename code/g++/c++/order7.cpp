#include <bits/stdc++.h>
using namespace std;
void mmi(vector<int> a, int n, int k)
{
    int i = 0;
    deque<int> Qi(k);
    for (; i < k; i++)
    {
        while (!Qi.empty() && a[i] >= a[Qi.back()])
            Qi.pop_back();
        Qi.push_back(i);
    }
    for (; i < n; i++)
    {
        cout << a[Qi.front()] << " ";
        while (!Qi.empty() && Qi.front() <= i - k)
            Qi.pop_front();
        while (!Qi.empty() && a[i] >= a[Qi.back()])
            Qi.pop_back();
        Qi.push_back(i);
    }
    cout << a[Qi.front()] << endl;
}
int mi()
{
    int t;
    cin >> t;
    int n, k;
    while (t--)
    {
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        mmi(a, n, k);
    }
    return 0;
}
int main()
{
    mi();
}

/*
#include<bits/stdc++.h>
#define pb push_back
#define ll long long //order 7
#define endl '\n'
#define mp make_pair
#define f first
#define s second
#define eb emplace_back
#define pii pair<int, int>
#define pll pair<ll, ll>
#define INF INT_MAX
#define LINF LLONG_MAX
#define testIN 0
#define testOUT 0
#define FILEINPUT freopen("inputCNB.txt", "r", stdin)
#define FILEOUTPUT freopen("ouputCNB.txt", "w", stdout)
#define FOR(i, m, n) for(int i=m; i<n; i++)
#define FORD(i, m, n) for(int i=m; i>=n; i--)
#define FastIO cin.tie(0); ios_base::sync_with_stdio(false); cout.tie(0);
#define pq_max priority_queue<int>
#define pq_min priority_queue<int, vector<int>, greater<int>>
#define reset(A) memset(A, 0, sizeof(A))
using namespace std;*/
/******* LIBRARY and DEFINE *******/ /*
 template<typename A, typename B>
 ostream& operator << (ostream &os, const pair<A, B> &p){return os << "(" << p.f << " " << p.s << ")";};
 template<typename T>
 ostream& operator << (ostream &os, const vector<T> &vec){for(auto ele: vec) os << ele << " "; return os;};*/
/********** TEMPLATES *********/     /*
     const int MAXN = 1e6 + 5;
     const int mod = 1e9 + 7;*/
/********** CONSTANT *********/      /*
      int ST[MAXN << 2] = {0}; // segment tree
      int A[MAXN];
     
      void build(int root, int left, int right){
          if(left == right){
              ST[root] = A[left];
              return;
          }
          int mid = (left + right) >> 1;
          build(root << 1, left, mid); // build tai goc 2*root
          build(root << 1 | 1, mid + 1, right); // build tai goc 2*root + 1
          ST[root] = max(ST[root << 1], ST[root << 1 | 1]);
      }
     
      int getMax(int root, int left, int right, int l, int r){
          if(right < l || left > r) return -INF;
          else if(left >= l && right <= r) return ST[root];
          int mid = (left + right) >> 1;
          return max(getMax(root << 1, left, mid, l, r), getMax(root << 1 | 1, mid + 1, right, l, r));
      }
     
      void solution(){
          reset(ST);
          int n, k;
          cin >> n >> k;
          FOR(i, 1, n + 1) cin >> A[i];
          build(1, 1, n);
          FOR(i, 1, n - k + 2)
              cout << getMax(1, 1, n, i, i + k - 1) << " ";
          cout << endl;
      }
      */