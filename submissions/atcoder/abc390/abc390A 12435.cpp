#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
    vector<int>v(5);
    for(auto& u:v){
        cin>>u;
    }
  bool check=false;
  
	for(int i=0;i<4;i++){
	      int cat=v[i+1];
	      int res=v[i];
	      bool ok=false;
	      for(int j=0;j<5;j++){
	            if(j==i){
	                 if(cat==j+1){
	                     
	                 }
	                 else{
	                     ok=true;
	                 }
	            }
	           else if(j==i+1){
	                 if(res==j+1){
	                      
	                 }
	                 else{
	                     ok=true;
	                 }
	            }
	            else{
	                 if(v[j]==j+1){
	                      
	                 }
	                 else{
	                     ok=true;
	                 }
	            }
	      }
	      if(!ok){
	          check=true;
	          break;
	      }
	}
	if(check) cout<<"Yes"<<'\n';
	else cout<<"No"<<'\n';

}
