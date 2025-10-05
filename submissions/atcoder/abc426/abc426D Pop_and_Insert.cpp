#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ul unsigned long long
const int mod=1e9+7;
const int N=3e5+5;
const int INF=1e18+7;


void solve(){
       int n;
       cin>>n;
      string s;
      cin>>s;
      int zmaxi=0;
      int zerocount=count(s.begin(),s.end(),'0');
      int onecount=count(s.begin(),s.end(),'1');
      for(int i=0;i<n;i++){
              if(s[i]=='0'){
                    int cnt=0;
                     while(s[i]=='0'&&(i<n)){
                          cnt++;
                          i++;
                     }
                     zmaxi=max(zmaxi,cnt);
              }
      }
       int omaxi=0;
      for(int i=0;i<n;i++){
              if(s[i]=='1'){
                    int cnt=0;
                     while(s[i]=='1'&&(i<n)){
                          cnt++;
                          i++;
                     }
                     omaxi=max(omaxi,cnt);
              }
      }
      int fzero=((zerocount-zmaxi)*2)+onecount;
      int fone=((onecount-omaxi)*2)+zerocount;
      cout<<min(fzero,fone)<<'\n';

    
}
int32_t main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t;
  cin>>t;
   while(t--){
      solve();
   }
 return 0;
}