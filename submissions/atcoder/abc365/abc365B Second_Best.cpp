#include<bits/stdc++.h>
using namespace std;
int main(){
  long long n;
  cin>>n;
  vector<long long>v(n);
  for(auto& u:v){
    cin>>u;
  }
  vector<pair<long long , long long>>p;
  for(int i=0;i<n;i++){
    p.push_back({v[i],i});
  }
  sort(p.rbegin(),p.rend());
  cout<<p[1].second+1;
}
