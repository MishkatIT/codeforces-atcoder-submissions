
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ul unsigned long long
const int mod=998244353;
const int N=3e5+5;
const int ma=-1e18+7;


void check(){
   int n;
   cin>>n;
  vector<pair<int,string>>p;
  for(int i=0;i<n;i++){
       string s;
       cin>>s;
       int len=s.size();
       p.push_back({len,s});
  }
  sort(p.begin(),p.end());
  for(int i=0;i<n;i++){
       cout<<p[i].second;
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
