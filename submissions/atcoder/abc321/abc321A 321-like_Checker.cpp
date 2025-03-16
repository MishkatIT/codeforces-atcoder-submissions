/*
   Author: TRIDIB DEB PABEL
   Date: 17-03-25
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
  string s;
  cin>>s;
  vector<int>v;
  for(int i=1;i<s.size();i++){
      int d=s[i]-'0';
      if(d>=(s[i-1]-'0')){
          cout<<"No";
          return;
      }
  }

      cout<<"Yes"<<'\n';
    
}

   
int32_t main() {

 // ios_base::sync_with_stdio(0);
 // cin.tie(0);
 // int t;
// cin>>t;
  //while(t--){
      tridib();
 // }


 return 0;
}

