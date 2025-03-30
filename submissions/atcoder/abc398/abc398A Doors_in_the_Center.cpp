#include<bits/stdc++.h>
using namespace std;
#define int long long
const int mod=1e18;
const int N=1e6;
const int ma=2147483647;



void check(){
   int n;
   cin>>n;
   if(n&1){
       for(int i=1;i<=n/2;i++){
           cout<<"-";
       }
       cout<<"=";
       for(int i=1;i<=n/2;i++){
           cout<<"-";
       }
   }
   else{
       for(int i=1;i<=(n/2-1);i++){
           cout<<"-";
       }
       cout<<"==";
       for(int i=1;i<=(n/2-1);i++){
           cout<<"-";
       }
       
   }
 
}
int32_t main() {

 // ios_base::sync_with_stdio(0);
  //cin.tie(0);
 // int t;
  //cin>>t;
 // while(t--){
      check();
//  }
 


 return 0;
}


