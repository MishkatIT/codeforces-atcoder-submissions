#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ul unsigned long long
const int mod=1e9+7;
const int N=1e5+5;
const int INF=1e18+7;


void solve(){
    int n;
	  cin>>n;
	   string s="";
	   int cnt=0;
	   bool ok=false;
	   while(n--){
	       char l;
	       int r;
	       cin>>l>>r;
	       if(!ok){
	       cnt+=r;
	       }
	       if(cnt<=100){
	           for(int i=0;i<r;i++){
	              s+=l;
	           }
	       }
	       else{
	           ok=true;
	       }
	   }
	   if(ok){
	       cout<<"Too Long";
	   }
	   else{
	       cout<<s<<'\n';
	   }

}
int32_t main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   int t;
//   cin>>t;
//   while(t--){
       solve();
//   }
 return 0;
}
