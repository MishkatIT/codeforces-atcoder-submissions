#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n),k(n);
    for(auto& u:v){
     cin>>u;
    }
    for(auto& u:k){
     cin>>u;
    }
    vector<pair<int,int>> p;
    for(int i=0;i<n;i++){
     p.push_back({v[i],k[i]});
   }
    sort(p.begin(),p.end());
    int s=0;
    for(int i=0;i<n-1;i++){
     if(p[i].first==p[i+1].first){
          s=s+p[i].second;
     }
    }
    cout<<s;
}