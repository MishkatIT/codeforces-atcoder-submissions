#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ul unsigned long long
const int mod=998244353;
const int N=1e5+5;
const int INF=1e13+7;


void solve(){
    int n,a,b;
    cin>>n>>a>>b;
    string s;
    cin>>s;
    for(int i=a;i<(n-b);i++){
       cout<<s[i];
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