#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ul unsigned long long
const int mod=998244353;
const int N=1e5+5;
const int INF=1e18+7;


void solve(){
   int n;
   cin>>n;
   string s;
   cin>>s;
   if(n<3){
       cout<<"No"<<'\n';
       return;
   }
   if((s[n-1]=='a')&&(s[n-2]=='e')&&(s[n-3]=='t')){
       cout<<"Yes"<<'\n';
   }
   else{
      cout<<"No"<<'\n';
   }

}
int32_t main() {
   // ios_base::sync_with_stdio(0);
   // cin.tie(0);
   // int t;
   // cin>>t;
   // while(t--){
        solve();
   // }
 return 0;
}