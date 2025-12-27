#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ul unsigned long long
const int mod=998244353;
const int N=1e5+5;
const int INF=1e18+7;


void solve(){
    int n,q;
    cin>>n>>q;
    vector<int>v(n);
    for(auto& u:v){
      cin>>u;
    }
    sort(v.begin(),v.end());
    vector<int>psum(n);
    psum[0]=v[0];
    for(int i=1;i<n;i++){
       psum[i]=psum[i-1]+v[i];
    }
    while(q--){
        int a;
        cin>>a;
        if(a>v[n-1]){
          cout<<-1<<'\n';
          continue;
        }
        int da=lower_bound(v.begin(),v.end(),a)-v.begin();
         int ka=0;
         if(da!=0){
            ka=psum[da-1];
         }
        int s=ka+a+((n-da-1)*(a-1));
        cout<<s<<'\n';
    }


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