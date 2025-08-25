#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ul unsigned long long
const int mod = 1e9 + 7;
const int N = 1e5 + 5;
const int INF = 1e13 + 7;


void solve() {
       int n,q;
       cin>>n>>q;
       vector<int>v1(n),v2(n);
       for(auto& u:v1){
         cin>>u;
       }
       for(auto& u:v2){
         cin>>u;
       }
        int ans=0;
       for(int i=0;i<n;i++){
           ans+=min(v1[i],v2[i]);
       }
       while(q--){
          char ch;
          cin>>ch;
          int a,b;
          cin>>a>>b;
          if(ch=='A'){
               int da=min(v1[a-1],v2[a-1]);
               ans-=da;
               v1[a-1]=b;
               ans+=(min(v1[a-1],v2[a-1]));
               cout<<ans<<'\n';
          }
          else{
               int da=min(v2[a-1],v1[a-1]);
               ans-=da;
               v2[a-1]=b;
               ans+=(min(v2[a-1],v1[a-1]));
               cout<<ans<<'\n';
          }


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