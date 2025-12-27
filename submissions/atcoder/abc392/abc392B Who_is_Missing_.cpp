 /*
   Author: TRIDIB DEB PABEL
   Date: 09-02-25
*/
#include<bits/stdc++.h>
using namespace std;
#include <iomanip>
#define int long long
#define ull unsigned long long int
#define all(v) v.begin(),v.end()
const int ma =1e9+7;
const int MOD = 1e18+7;
const int N = 1005;


void tridib(){
     int n,m;
     cin>>n>>m;
     vector<int>v(m);
     vector<bool>ch(n+1,true);
     for(auto& u:v){
          cin>>u;
          ch[u]=false;
     }
     vector<int>mat;
     for(int i=1;i<ch.size();i++){
          if(ch[i]){
               mat.push_back(i);
          }
     }
    
         cout<<mat.size()<<'\n';
         for(auto u:mat){
              cout<<u<<" ";
         }
         //cout<<'\n';
     //cout<<'\n';
  
}
int32_t main() {
    
  //ios_base::sync_with_stdio(0);
  //cin.tie(0);
  //int t;
 // cin>>t;
  //while(t--){
    tridib();
 // }
  
        
 return 0;
}
                 