#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto& u:v){
        cin>>u;
    }
   // cout<<da<<'\n';
   bool ok=false;
    for(int i=0;i<n-2;i++){
         //if((v[i]/v[i-1])!=da){
          //    ok=true;
         //     break;
        // }
      if((v[i]*v[i+2])!=(v[i+1]*v[i+1])){
           ok=true;
           break;
      }
    }
   // if(cat!=v.back()){
    //    ok=true;
   // }
    if(ok){
         cout<<"No"<<'\n';
    }
    else{
        cout<<"Yes"<<'\n';
    }
	             

}
