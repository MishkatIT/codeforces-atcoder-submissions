#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ul unsigned long long
const int mod = 1e9 + 7;
const int N = 1e5 + 5;
const int INF = 1e13 + 7;


void solve() {
      int x, y;
      cin >> x >> y;
      int res = (x + y) % 12;
      if(res == 0){
          cout << 12;
      }
      else{
      cout << res;
      }



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