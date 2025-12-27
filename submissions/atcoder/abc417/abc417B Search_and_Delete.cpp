#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ul unsigned long long
const int mod=998244353;
const int N=1e5+5;
const int INF=1e13+7;


void solve(){
    int n,m;
    cin>>n>>m;
    multiset<int>ms;
    for(int i=0;i<n;i++){
       int a;
       cin>>a;
       ms.insert(a);
    }
    for(int i=0;i<m;i++){
       int a;
       cin>>a;
       auto it=ms.find(a);
       if(it!=ms.end()){
         ms.erase(it);
       }
    }
    for(auto u:ms){
       cout<<u<<" ";
    }
    cout<<'\n';
   
}
int32_t main() {
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    // int t;
    // cin>>t;
    // while(t--){
         solve();
    // }
 return 0;
}