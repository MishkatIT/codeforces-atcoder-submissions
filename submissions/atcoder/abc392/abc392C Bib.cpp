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
     int n;
     cin>>n;
     vector<pair<int,int>>p(n);
     for(auto& [x,y]:p){
          // int a;
           cin>>x;
          // x=a;
     }
     for(auto& [x,y]:p){
         //  int a;
           cin>>y;
          // y=a;
     }
    // for(int i=0;i<n;i++){
      //    cout<<p[i].first<<" "<<p[i].second<<'\n';
//}
     vector<pair<int,int>>ca;
     for(int i=0;i<n;i++){
         ca.push_back({p[i].second,p[i].first});
     }
     sort(ca.begin(),ca.end());
     vector<int>res(n);
     for(int i=0;i<n;i++){
        res[i]=(p[ca[i].second-1].second);
     }
     for(int i=0;i<n;i++){
          cout<<res[i]<<" ";
     }
     cout<<'\n';
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
                 