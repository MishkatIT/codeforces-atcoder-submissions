#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ul unsigned long long
const int mod=1e9+7;
const int N=1e9;
const int INF=1e18+7;

void solve(){  
   int n;
   cin>>n;
   vector<int>v(n);
   for(auto& u:v){
       cin>>u;
   }
   int maxi=v.front()-1;
   int cnt=1;
   for(int i=1;i<n;i++){
       if(maxi>=i){
          int val=i+v[i]-1;
          maxi=max(val,maxi);
         cnt++;
       }
       else{
          break;
       }
   }
   cout<<cnt<<'\n';
  
}

int32_t main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t=1;
  // cin >> t;
   while(t--){
      solve();
   }
   return 0;
}