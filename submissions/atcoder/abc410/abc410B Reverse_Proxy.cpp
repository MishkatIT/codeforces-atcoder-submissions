#include <bits/stdc++.h>
using namespace std;

int main() {
   int n,q;
   cin>>n>>q;
   vector<int>v(q);
   for(auto& u:v){
       cin>>u;
   }
   vector<int>v1(n+1,0);
   vector<int>ans(q,0);
   for(int i=0;i<q;i++){
        if(v[i]>0){
            v1[v[i]]++;
            ans[i]=v[i];
        }
        else{
            int mini=INT_MAX;
            int ok=-1;
            for(int i=n;i>=1;i--){
                if(v1[i]<=mini){
                    mini=v1[i];
                    ok=i;
                }
            }
            v1[ok]++;
            ans[i]=ok;
        }
   }
   for(auto u:ans){
       cout<<u<<" ";
   }

}
