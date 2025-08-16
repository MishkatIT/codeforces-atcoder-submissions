#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ul unsigned long long
const int mod = 1e9 + 7;
const int N = 1e5 + 5;
const int INF = 1e13 + 7;

multiset<int>s;

void solve() {
     int type;
     cin >> type;
     if(type == 1){
         int val;
         cin >> val;
         s.insert(val);
     }
     else{
         cout << *s.begin() <<'\n';
         s.erase(s.begin());
     }
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t=1;
  cin >> t;
  while (t--) {
    solve();
  }

   return 0;
 }