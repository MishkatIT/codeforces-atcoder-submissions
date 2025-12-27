#include<bits/stdc++.h>
using namespace std;
#define int long long
const int mod=1e18;
const int N=1e6;
const int ma=2147483647;



void check(){
    int n;
    cin>>n;
    string s,p;
    cin>>s>>p;
    int cnt=0;
    for(int i=0;i<n;i++){
         if(s[i]!=p[i]){
             cnt++;
         }
    }
    cout<<cnt<<'\n';
  
 
}
int32_t main() {

 // ios_base::sync_with_stdio(0);
 // cin.tie(0);
  
  
//  int t;
 // cin>>t;
//  while(t--){
      check();
//  }
 


 return 0;
}


