#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ul unsigned long long
const int mod = 1e9 + 7;
const int N = 1e5 + 5;
const int INF = 1e13 + 7;


void solve() {
        int n,m;
        cin>>n>>m;
        vector<string>v(n);
        for(auto& u:v){
           cin>>u;
        }
        vector<int>ans(n+1);
        int maxi=0;
        for(int i=0;i<m;i++){ 
              int zcnt=0,ocnt=0;
              for(int j=0;j<n;j++){
                   if(v[j][i]=='0'){
                      zcnt++;
                   }
                   else{
                     ocnt++;
                   }
              }
              char ch='0';
               if(ocnt==n){
                  ch='1';
               }
              else if(ocnt<zcnt){
                  ch='1';
              }
               for(int k=0;k<n;k++){
                   if(v[k][i]==ch){
                      ans[k+1]++;
                      maxi=max(ans[k+1],maxi);
                   }
                   
              }
               

        }
        for(int i=1;i<=n;i++){
            if(ans[i]==maxi){
                cout<<i<<" ";
            }
        }
        cout<<'\n';

}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t=1;
  //cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}