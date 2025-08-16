#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ul unsigned long long
const int mod = 1e9 + 7;
const int N = 1e5 + 5;
const int INF = 1e13 + 7;

void solve() {
   string s;
   cin >> s;
   if(s == "red"){
     cout << "SSS" <<'\n';
   }
   else if(s == "blue"){
     cout << "FFF" <<'\n';
   }
   else if(s == "green"){
     cout << "MMM" <<'\n';
   }
   else{
     cout << "Unknown" <<'\n';
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