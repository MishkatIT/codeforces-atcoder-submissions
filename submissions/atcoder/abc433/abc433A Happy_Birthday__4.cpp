#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ul unsigned long long
const int mod=1e9+7;
const int N=1e9;
const int INF=1e18+7;


// adjacent duita same howa jabe na
void solve(){  
   int x,y,z;
   cin>>x>>y>>z;
   int temp=x-(y*z);
   if((temp%(z-1))==0){
        int da=temp/(z-1);
        if(da>=0){
           cout<<"Yes"<<'\n';
        }
        else{
            cout<<"No"<<'\n';
        }
   }
   else{
   cout<<"No"<<'\n';
   }
     
}

int32_t main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t=1;
   //cin >> t;
   while(t--){
      solve();
   }
   return 0;
}