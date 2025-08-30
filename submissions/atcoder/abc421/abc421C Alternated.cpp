#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ul unsigned long long
const int mod = 1e9 + 7;
const int N = 1e5 + 5;
const int INF = 1e13 + 7;




void solve() {
      int n;
      cin>>n;
      string s;
      cin>>s;
      vector<int>v;
      for(int i=0;i<(2*n);i++){
          if(s[i]=='A'){
             v.push_back(i);
          }
      }
      int ok=0;
      int ans=0;
      int ans2=0;
      for(int i=0;i<n;i++){
          ans+=abs(v[i]-ok);
          ok+=2;
      }
      int ok2=1;
      for(int i=0;i<n;i++){
         ans2+=abs(v[i]-ok2);
         ok2+=2;
      }
     // cout<<ans<<" "<<ans2<<'\n';
      cout<<min(ans,ans2)<<'\n';

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