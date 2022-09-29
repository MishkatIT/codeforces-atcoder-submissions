#include<bits/stdc++.h>
#define nl "\n"
#define y "YES"
#define n "NO"
#define fori(i) for (int i = 0; i < n; i++)
#define forj(j) for (int j = i+1; j < n; j++)
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long int lli;
typedef long int li;
typedef long double llf;
using namespace std;
int main()
{
    fio;
    string str1, str2, str3;
    cin >> str1 >> str2 >> str3;
    string str=str1+str2;
    sort(str.begin(),str.end());
    sort(str3.begin(), str3.end());
    if(str==str3)
        cout << y;
    else
        cout << n;
}
