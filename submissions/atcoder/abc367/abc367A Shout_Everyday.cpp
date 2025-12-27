/*
    Author: TRIDIB DEB PABEL
    Date: 17-08-2024
*/
 
#include <bits/stdc++.h>
using namespace std;
#define taratari ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ull unsigned long long int
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define all(v) v.begin(), v.end()
#define endl '\n'
#define rep(i, a, n) for (int i = a; i < n; i++)
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define pb push_back
#define ff first
#define ss second
#define allsort(v) sort(v.begin(), v.end())
#define szv (int)v.size()
#define szs (int)s.size()
#define ft front()
#define bk back()
const int mod = 1e9 + 7;

int main(){
  int a,b,c;
  cin>>a>>b>>c;
  if(c>b){
    if(a>=b&&a<=c){
        cout<<"No";
    }
    else{
        cout<<"Yes";
    }
  }
  else if(b>c){
       if((a>=b&&a<=24)||a<=c){
        cout<<"No";
       }
       else{
        cout<<"Yes";
       }
  }
    return 0;
  
}