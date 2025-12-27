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
      vector<string>v(n);
      for(auto& u:v){
        cin>>u;
      }
      int x;
      cin>>x;
      string y;
      cin>>y;
       if(v[x-1]==y){
          cout<<"Yes"<<'\n';
        }
        else{
           cout<<"No"<<'\n';
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