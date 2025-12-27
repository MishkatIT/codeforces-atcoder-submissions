#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ul unsigned long long
const int mod=998244353;
const int N=1e5+5;
const int INF=1e18+7;


void solve(){
  string s;
  cin>>s;
  int n=s.size();
  if(n<3){
    cout<<0.00000000000000<<'\n';
    return;
  }
  double maxi=0.0;
  for(int i=0;i<n-2;i++){
    if(s[i]=='t'){
       int cntt=1;
    for(int j=i+1;j<n;j++){
        if(s[j]=='t'){
          cntt++;
        }
        if((s[j]=='t')&&(j!=(i+1))){
             double cat=(double)(cntt-2)/(j-i-1);
             if(cat>maxi){
                maxi=cat;
             }
        }
    }
   }
  }
  cout<<fixed<<setprecision(15)<<maxi<<'\n';

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