#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ul unsigned long long
const int mod=998244353;
const int N=1e5+5;
const int INF=1e13+7;


void solve(){
     int n;
     cin>>n;
     vector<int>v(n);
     for(auto& u:v){
      cin>>u;
     }
     map<int,int>mp;
     for(int i=0;i<n;i++){
        int da=i-v[i];
        if(da>=0){
           mp[da]++;
        }
     }
     int ans=0;
     for(int i=0;i<n;i++){
        int da=i+v[i];
        int dat=i-v[i];
        ans+=mp[da];
        if(dat>=0){
           mp[dat]--;
        }
     }
     cout<<ans<<'\n';
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