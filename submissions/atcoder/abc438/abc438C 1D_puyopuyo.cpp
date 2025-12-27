#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ul unsigned long long
const int mod=998244353;
const int N=1e9;
const int INF=1e18+7;


void solve(){  
   int n;
   cin>>n;
   vector<int>v(n);
   for(auto& u:v){
     cin>>u;
   }
   stack<int>st;
   for(int i=0;i<n;i++){
      st.push(v[i]);
      stack<int>sta;
      bool ok=false;
       for(int j=1;j<=4;j++){
           if((st.empty())||(st.top()!=v[i])){
               ok=true;
               break;
               
           }
           sta.push(st.top());
           st.pop();
       }
       if(ok){
          while(!sta.empty()){
              st.push(sta.top());
              sta.pop();
          }
       }
   }
   cout<<st.size()<<'\n';
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