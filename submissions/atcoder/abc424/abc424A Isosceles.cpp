#include <bits/stdc++.h>
using namespace std;
#define int long long
const int INF = 1e18+7;

void solve() {
   set<int>s;
   int a,b,c;
   cin>>a>>b>>c;
   s.insert(a);
   s.insert(b);
   s.insert(c);
   if(s.size()==1||s.size()==2){
      cout<<"Yes"<<'\n';
   }
   else{
    cout<<"No"<<'\n';
   }


      
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
