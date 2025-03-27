#include<bits/stdc++.h>
using namespace std;
#define int long long
const int mod=1e18;



void check(){
      int n;
      cin>>n;
      vector<int>v(n);
      for(auto& u:v){
          cin>>u;
      }
      for(int i=0;i<n-1;i++){
          cout<<v[i]*v[i+1]<<" ";
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


