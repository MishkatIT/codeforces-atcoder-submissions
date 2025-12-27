#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ul unsigned long long
const int mod=998244353;
const int N=1e9;
const int INF=1e18+7;


void solve(){  
   int d,f;
   cin>>d>>f;
   int value=f;
   while(true){
      value+=7;
      if(value>d){
         break;
      }
   }
   cout<<value-d<<'\n';
}

int32_t main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
  int t=1;
  //cin >> t;
  while(t--){
     solve();
  }
   return 0;
}