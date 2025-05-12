
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ul unsigned long long
const int mod=998244353;
const int N=3e5+5;
const int ma=-1e18+7;


void check(){
    int n,m;
    cin>>n>>m;
    vector<int>v(n);
    for(auto& u:v){
        cin>>u;
    }
     vector<bool>che(m+1,false);
             for(int j=0;j<n;j++){
                  che[v[j]]=true;
             }
             for(int k=1;k<=m;k++){
                  if(!che[k]){
                      cout<<0<<'\n';
                      return;
                  }
             }
             vector<int>ans(m+1,-1);
          for(int i=0;i<n;i++){
               if(ans[v[i]]==-1){
                   ans[v[i]]=i;
               }
          }
          int maxi=ma;
          for(int i=0;i<ans.size();i++){
              maxi=max(maxi,ans[i]);
          }
          cout<<n-maxi<<'\n';
}
int32_t main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   int t;
//   cin>>t;
//   while(t--){
       check();
//   }
 return 0;
}
