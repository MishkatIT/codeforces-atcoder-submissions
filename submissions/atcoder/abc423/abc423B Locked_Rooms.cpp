#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ul unsigned long long
const int mod=1e9+7;
const int N=3e5+5;
const int INF=1e18+7;


void solve(){
     int n;
     cin>>n;
     vector<int>v(n);
     for(auto& u:v){
      cin>>u;
     }
     int left=0;
     int right=0;
     for(int i=0;i<n;i++){
        if(v[i]==1){
         left=i;
           break;
        }
     }
     for(int i=n-1;i>=0;i--){
        if(v[i]==1){
           right=i;
           break;
        }
     }
     cout<<right-left<<'\n';
   
  


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