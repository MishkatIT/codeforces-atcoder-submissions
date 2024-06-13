/*
    Author: TRIDIB DEB PABEL
    Date: 14-06-24
*/
 
#include <bits/stdc++.h>
using namespace std;
#define taratari ios_base::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);
#define ll long long
#define ull unsigned long long int
#define endl '\n'
#define pb push_back
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define all(v) v.begin(),v.end()
#define rep(i,a,n) for(int i=a;i<n;i++)
#define forn(i,n) for (int i = 0; i < int(n); i++)
#define ff first
#define ss second
#define sorting(v) sort(v.begin(),v.end())
#define szv (int)v.size()
#define szs (int)s.size()
#define ft front()
#define bk back()
const int mod = 1e9 + 7;

int main()
{
  int a,b,c;
  cin>>a>>b>>c;
  vector<int>v(a);
  for(int i=0;i<a;i++)
  {
    v[i]=i+1;
  }
  for(int j=0;j<b-1;j++)
  {
    cout<<v[j]<<" ";
  }
  for(int k=c-1;k>=b-1;k--)
  {
    cout<<v[k]<<" ";
  }
  for(int m=c;m<a;m++)
  {
    cout<<v[m]<<" ";
  }
return 0;
}