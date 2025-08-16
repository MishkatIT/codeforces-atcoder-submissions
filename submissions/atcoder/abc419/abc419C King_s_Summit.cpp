#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ul unsigned long long
const int mod = 1e9 + 7;
const int N = 1e5 + 5;
const int INF = 1e13 + 7;



void solve() {
     int q;
     cin >> q;
      int maxi = 0;
      int mini = INF;
      int maxi1 = 0;
      int mini1 = INF;
      while(q--){
     int a , b;
     cin >> a >> b;
     maxi = max(a , maxi);
     mini = min (a , mini);
      maxi1 = max(b , maxi1);
     mini1 = min (b , mini1);
      }
       int c = ((maxi - mini)+1)/2;
      int d = ((maxi1 - mini1)+1)/2;
      cout << max( c, d)<<'\n';
      
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t=1;
  //cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}