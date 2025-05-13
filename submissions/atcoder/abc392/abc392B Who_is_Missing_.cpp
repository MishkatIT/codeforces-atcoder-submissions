
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
   vector<bool>ans(n+1,false);
   for(int i=0;i<m;i++){
        int a;
        cin>>a;
        ans[a]=true;
   }
   cout<<n-m<<'\n';
   for(int i=1;i<=n;i++){
        if(!ans[i]){
            cout<<i<<" ";
        }
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
