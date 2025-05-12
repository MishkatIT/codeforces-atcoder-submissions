
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
      int cnt=0;
      for(int i=n;i>=0;i--){
           vector<bool>che(m+1,false);
             for(int j=0;j<i;j++){
                  che[v[j]]=true;
             }
             for(int k=1;k<=m;k++){
                  if(!che[k]){
                      cout<<cnt<<'\n';
                      return;
                  }
             }
             cnt++;
      }

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
