#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ul unsigned long long
const int mod=1e9+7;
const int N=1e6;
const int INF=1e18+7;



void solve(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        if(i<=m){
          cout<<"OK"<<'\n';
        }
        else{
           cout<<"Too Many Requests"<<'\n';
        }
    }


    
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