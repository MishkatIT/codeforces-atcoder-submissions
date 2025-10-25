#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ul unsigned long long
const int mod=1e9+7;
const int N=1e6;
const int INF=1e18+7;



void solve(){
     int n;
     cin>>n;
     vector<int>v(n);
     map<int,int>mp;
     for(auto& u:v){
       cin>>u;
       mp[u]++;
     }
     int ans=0;
     for(auto u:mp){
       int da=n-u.second;
       int dat=((u.second)*(u.second-1))/2;
       ans+=(da*dat);
     }
     cout<<ans<<'\n';
   

    
}
int32_t main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t=1;
   //cin>>t;
   while(t--){
      solve();
   }
 return 0;
}