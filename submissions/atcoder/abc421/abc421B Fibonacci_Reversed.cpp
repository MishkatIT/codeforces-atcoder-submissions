#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ul unsigned long long
const int mod = 1e9 + 7;
const int N = 1e5 + 5;
const int INF = 1e13 + 7;




void solve() {
       int x,y;
       cin>>x>>y;
       int prev=x;
       int imprev=y;
       for(int i=1;i<=8;i++){
           string ta=to_string(prev+imprev);
           reverse(ta.begin(),ta.end());
           prev=imprev;
           imprev=stoll(ta);
       }
       cout<<imprev<<'\n';

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