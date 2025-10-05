#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ul unsigned long long
const int mod=1e9+7;
const int N=3e5+5;
const int INF=1e18+7;


void solve(){
      string s;
      cin>>s;
      map<char,int>mp;
      for(int i=0;i<s.size();i++){
           mp[s[i]]++;
      }
      for(auto u:mp){
           if(u.second==1){
             cout<<u.first;
             return;
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