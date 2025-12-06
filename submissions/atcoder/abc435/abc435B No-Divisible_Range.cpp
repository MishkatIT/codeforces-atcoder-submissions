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
   int cnt=0;
   for(int i=0;i<n;i++){
      int s=v[i];
        for(int j=i+1;j<n;j++){
           s+=v[j];
           bool ok=false;
           for(int k=i;k<=j;k++){
               if(s%v[k]==0){
                   ok=true;
                   break;
               }
           }
           if(!ok){
             cnt++;
           }
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