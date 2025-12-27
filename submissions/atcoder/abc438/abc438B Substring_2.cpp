#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ul unsigned long long
const int mod=998244353;
const int N=1e9;
const int INF=1e18+7;


void solve(){  
    int n,m;
    cin>>n>>m;
    string s,ta;
    cin>>s>>ta;
    int mini=INF;
    for(int i=0;i<=(n-m);i++){
        string temp=s.substr(i,m);
        int ans=0;
        for(int j=0;j<m;j++){
             if(temp[j]>=ta[j]){
                 ans+=(temp[j]-ta[j]);
             }
             else{
              ans+=(10-(ta[j]-'0'));
                 if(ta[j]!='0'){
                    ans+=(temp[j]-'0'); 
                 }
             }
        }
        mini=min(ans,mini);
    }
    cout<<mini<<'\n';
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