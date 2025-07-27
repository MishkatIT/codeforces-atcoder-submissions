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
    int da=count(s.begin(),s.end(),'#');
    if(s[0]=='.'){
       s[0]='o';
    }
    for(int i=1;i<s.size();i++){
       if(s[i-1]=='#'&&s[i]=='.'){
         s[i]='o';
       }
    }
    cout<<s<<'\n';
    
   
}
int32_t main() {
  //  ios_base::sync_with_stdio(0);
  //  cin.tie(0);
  //  int t;
  //  cin>>t;
  //  while(t--){
        solve();
  //  }
 return 0;
}