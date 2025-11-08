#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ul unsigned long long
const int mod=1e9+7;
const int N=1e9;
const int INF=1e18+7;

void solve(){  
   int x;
   cin>>x;
   int n;
   cin>>n;
   vector<int>v(n);
   set<int>s;
   for(auto& u:v){
      cin>>u;
   }
   int q;
   cin>>q;
   while(q--){ 
       int p;
       cin>>p;
       p--;
        auto it=s.find(p);
       if(it==s.end()){
           x+=v[p];
           s.insert(p);
       }
       else{
          s.erase(it);
          x-=v[p];
       }
     cout<<x<<'\n';



   }
   


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