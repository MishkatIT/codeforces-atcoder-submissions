
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ul unsigned long long
const int mod = 1e9 + 7;
const int N = 1e5 + 5;
const int INF = 1e13 + 7;



void solve() {
      int n,m;
      cin >> n >> m;
      string s , p;
      cin >> s >> p;
      vector <int> v(m),v1(m);
      for( int i = 0; i < m; i++){
         cin >>v[i] >> v1[i];
      }
      sort(v.begin() , v.end());
      sort(v1.begin() , v1.end());
      string final = s;
      for(int i = 1;i <= n; i++){
          int left = upper_bound(v.begin() , v.end(), i) - v.begin();
          int right = lower_bound(v1.begin() , v1.end(), i) - v1.begin();
          int ok = left - right;
          if(ok & 1){
             final[i-1] = p[i-1];
          }
          
      }
      cout << final <<'\n';
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