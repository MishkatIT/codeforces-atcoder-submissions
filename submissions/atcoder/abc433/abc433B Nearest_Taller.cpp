#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ul unsigned long long
const int mod=1e9+7;
const int N=1e9;
const int INF=1e18+7;


// adjacent duita same howa jabe na
void solve(){  
     int n;
     cin>>n;
     vector<int>v(n);
     for(auto& u:v){
      cin>>u;
     }
     for(int i=0;i<n;i++){
         bool ok=false;
         for(int j=i-1;j>=0;j--){
             if(v[j]>v[i]){
                cout<<j+1<<'\n';
                ok=true;
                break;
             }
         }
         if(!ok){
           cout<<-1<<'\n';
         }
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