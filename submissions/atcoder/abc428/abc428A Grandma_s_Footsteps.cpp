#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ul unsigned long long
const int mod=1e9+7;
const int N=1e5;
const int INF=1e18+7;



void solve(){
  int s,a,b,x;
  cin>>s>>a>>b>>x;
  int ka=x/(a+b);
  int kat=x%(a+b);
  int cat=min(a,kat);
  int ans=(ka*a*s)+(cat*s);
  cout<<ans<<'\n';
   


}
int32_t main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t=1;
  // cin>>t;
   while(t--){
      solve();
   }
 return 0;
}