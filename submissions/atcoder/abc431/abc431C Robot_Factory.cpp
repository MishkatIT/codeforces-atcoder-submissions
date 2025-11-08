#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ul unsigned long long
const int mod=1e9+7;
const int N=1e9;
const int INF=1e18+7;

void solve(){  
   int n,m,k;
   cin>>n>>m>>k;
   vector<int>h(n);
   multiset<int>ms;
   for(auto& u:h){
      cin>>u;
   }
   for(int i=0;i<m;i++){
        int val;
        cin>>val;
        ms.insert(val);
   }
   int cnt=0;
   for(int i=0;i<n;i++){
       if(ms.empty()){
          break;
       }
       auto it=ms.lower_bound(h[i]);
       if(it!=ms.end()){
           ms.erase(it);
           cnt++;
       }
   }
    if(cnt>=k){
       cout<<"Yes"<<'\n';
    }
    else{
       cout<<"No"<<'\n';
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