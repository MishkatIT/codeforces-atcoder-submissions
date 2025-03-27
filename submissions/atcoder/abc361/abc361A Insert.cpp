#include<bits/stdc++.h>
using namespace std;
#define int long long
const int mod=1e18;



void check(){
      int n,k,x;
      cin>>n>>k>>x;
      vector<int>v(n);
      for(auto& u:v){
          cin>>u;
      }
      v.insert(v.begin()+k,x);
      for(auto u:v){
          cout<<u<<" ";
      }
      cout<<'\n';
 
}
int32_t main() {

 // ios_base::sync_with_stdio(0);
 // cin.tie(0);
  
  
//  int t;
//  cin>>t;
//  while(t--){
      check();
//  }
 


 return 0;
}


