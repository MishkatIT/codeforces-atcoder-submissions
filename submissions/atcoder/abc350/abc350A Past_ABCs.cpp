//*****TRIDIB DEB PABEL*****
#include<bits/stdc++.h>
#include<iostream>
#include <cstdlib>
using namespace std;
#define fast_io ios_base::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);
#define ll long long
#define ull unsigned long long int
#define endl '\n'
#define pb push_back
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define all(v) v.begin(),v.end()
#define rep(i,a,n) for(int i=a;i<n;i++)
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define ff first
#define ss second
#define allsort(v) sort(v.begin(),v.end())
#define szv (int)v.size()
#define szs (int)s.size()
#define ft front()
#define bk back()
const int mod = 1e9 + 7;

int main()
{
	string s;
	cin>>s;
	int a=s[3]-48;
	int b=s[4]-48;
	int c=s[5]-48;
	
	
	
	if(a==0&&b==0&&c==0)
		{
			cout<<"No";
		}
		else if(a==3&&b==1&&c==6)
		{
			cout<<"No";
		}
		else if(a==3)
		{
			if(b<=4&&c<=9)
			{
				cout<<"Yes";
			}
			else
				{
					cout<<"No";
				}
			}


		 else if(a<3)
		
	{
		cout<<"Yes";
	}

	else
		{
			cout<<"No";
		}

return 0;
}
