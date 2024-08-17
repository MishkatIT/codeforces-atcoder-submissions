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
  string s;
  cin>>s;
  int ok;
  for(int i=s.size()-1;i>=0;i--){
    if(s[i]!='0'||s[i]=='.'){
        ok=i;
        break;
    }
  }
  if(s[ok]=='.'){
    for(int i=0;i<ok;i++){
        cout<<s[i];
    }
  }
  else{
    for(int i=0;i<=ok;i++){
        cout<<s[i];
    }
  }
    return 0;
  
}