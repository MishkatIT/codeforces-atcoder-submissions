
#include<bits/stdc++.h>
using namespace std;
const long long mod=1e9+7;

void check(){
  long long n;
  cin>>n;
  vector<long long>v(n);
  for(auto& u:v){
    cin>>u;
  }
  vector<long long>v1(n);
  v1[0]=v[0];
  for(int i=1;i<n;i++){
    v1[i]=v1[i-1]+v[i];
  }
  long long ans=0;
  for(int i=0;i<n;i++){
    long long cat=v1[n-1]-v1[i];
     long long da=((v[i]%mod)*(cat%mod))%mod;
    ans+=da;
   // ans%=mod;
  }
  cout<<ans%mod<<'\n';
}
int main(){
  // int t;
   //cin>>t;
   //while(t--){
    check();
   //}


}
