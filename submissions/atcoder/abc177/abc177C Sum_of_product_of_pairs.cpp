
#include<bits/stdc++.h>
using namespace std;
const long long mod=1e9+7;

void check(){
  long long n;
  cin>>n;
  vector<long long>v(n);
  long long s=0;
  for(auto& u:v){
    cin>>u;
    s+=u;
  }
  long long ans=0;
  long long wow=0;
  for(int i=0;i<n;i++){
    wow+=v[i];
    long long cat=s-wow;
     long long da=((v[i]%mod)*(cat%mod))%mod;
    ans+=da;
    //ans%=mod;

  }
  long long pat=ans%mod;
  cout<<pat<<'\n';
}
int main(){
  // int t;
   //cin>>t;
   //while(t--){
    check();
   //}


}
