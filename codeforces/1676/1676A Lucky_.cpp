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
    int t;
    string ticket, first, last;
    cin >> t;
    while(t--)
    {
        cin >> ticket;
        first=ticket[0]+ticket[1]+ticket[2];
        last=ticket[3]+ticket[4]+ticket[5];

        if (first == last)
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }
}


