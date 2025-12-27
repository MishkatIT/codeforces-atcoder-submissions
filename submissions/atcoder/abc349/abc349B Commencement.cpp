
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ul unsigned long long
const int mod=998244353;
const int N=3e5+5;
const int ma=-1e18+7;


void check(){
  string s;
  cin>>s;
  map<char,int>mp;
  for(int i=0;i<s.size();i++){
       mp[s[i]]++;
  }
  for(int i=1;i<=s.size();i++){
      int cnt=0;
       for(auto& u:mp){
            if(u.second==i){
                cnt++;
            }
       }
       if(cnt!=0&&cnt!=2){
            cout<<"No"<<'\n';
            return;
       }
  }
  cout<<"Yes"<<'\n';
  
    
}
int32_t main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   int t;
//   cin>>t;
//   while(t--){
       check();
//   }
 return 0;
}
