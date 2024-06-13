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
  int a,b;
  cin>>a>>b;
  int arr[b];
  for(int i=0;i<b;i++)
    {
        cin>>arr[i];
    }
    int brr[a][b];
    for(int j=0;j<a;j++)
    {
        for(int k=0;k<b;k++)
        {
            cin>>brr[j][k];
        }
    }
    bool pabel=false;
    for(int m=0;m<b;m++)
    {
         long long s=0;

        for(int n=0;n<a;n++)
        {
            s=s+brr[n][m];
        }
        if(s<arr[m])
        {
              pabel=true;
              break;
        }
    }
    if(pabel)
    {
        cout<<"No";
    }
    else
    {
        cout<<"Yes";
    }

return 0;
}