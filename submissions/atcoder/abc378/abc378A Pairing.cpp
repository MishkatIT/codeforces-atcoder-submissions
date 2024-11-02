/* 
   Author: TRIDIB DEB PABEL
   Date: 02-11-24
*/
#include<bits/stdc++.h>
using namespace std;
#include <iomanip>
#define taratari ios_base::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);
#define int long long
#define ull unsigned long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define all(v) v.begin(),v.end()
#define endl '\n'
#define pb push_back
#define ff first
#define ss second
#define allsort(v) sort(v.begin(),v.end())
#define szv (int)v.size()
#define szs (int)s.size()
#define ft front()
#define bk back()
const long long ma = 1e9+7;
const long long MOD = 1e18+7 ;



int32_t main(){
     vector<int>v(4);
     for(auto& u:v){
      cin>>u;
     }
     sort(v.begin(),v.end());
     if(v[0]==v[1]&&v[2]==v[3]){
          cout<<2<<endl;
     }
     else if(v[0]==1&&v[1]==2&&v[2]==3&&v[3]==4){
        cout<<0<<endl;
     }
     else{
      cout<<1<<endl;
     }
   
   return 0;
}