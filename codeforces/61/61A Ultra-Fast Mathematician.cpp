#include<bits/stdc++.h>
#define nl "\n"
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
    string n1, n2;
    cin >> n1 >> n2;
    for(int i = 0; i<n1.length(); i++)
    {
        if ((n1[i]=='0' && n2[i]=='1') || (n1[i]=='1' && n2[i]=='0'))
            n1[i]='1';
        else
            n1[i]='0';
        cout << n1[i];
    }




}


