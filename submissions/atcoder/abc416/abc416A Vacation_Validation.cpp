#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ul unsigned long long
const int mod=998244353;
const int N=1e5+5;
const int INF=1e18+7;


void solve(){
    int n,l,r;
    cin>>n>>l>>r;
    string s;
    cin>>s;
    bool ok=false;
    for(int i=l-1;i<=r-1;i++){
       if(s[i]=='x'){
         ok=true;
         break;
       }
    }
    cout<<(ok ? "No":"Yes")<<'\n';
   
}
int32_t main() {
  //  ios_base::sync_with_stdio(0);
  //  cin.tie(0);
  //  int t;
  //  cin>>t;
  //  while(t--){
        solve();
  //  }
 return 0;
}