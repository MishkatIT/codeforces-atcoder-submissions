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
    for(int i=1;i<n-1;i++){
         //if((v[i]/v[i-1])!=da){
          //    ok=true;
         //     break;
        // }
      if((v[i-1]*v[i+1])!=(v[i]*v[i])){
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
