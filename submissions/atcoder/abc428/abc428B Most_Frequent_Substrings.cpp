#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ul unsigned long long
const int mod=1e9+7;
const int N=1e5;
const int INF=1e18+7;



void solve(){
   int n,k;
   cin>>n>>k;
   map<string,int>mp;
   string s;
   cin>>s;
   for(int i=0;i<=(n-k);i++){
        string pa=s.substr(i,k);
        mp[pa]++;
   }
   int maxi=0;
   for(auto u:mp){
      maxi=max(u.second,maxi);
   }
   cout<<maxi<<'\n';
   for(auto u:mp){
     if(u.second==maxi){
        cout<<u.first<<" ";
     }
   }


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