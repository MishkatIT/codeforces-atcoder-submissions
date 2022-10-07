#include<bits/stdc++.h>
#define nl "\n"
#define fori(start,end,increment) for (i = start; i <= end; i+=increment)
#define forj(start,end,increment) for (j = start; j <= end; j+=increment)
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long int lli;
typedef long int li;
typedef long double llf;
using namespace std;
int main()
{
    fio;
    int t, row, col, i, j;
    char temp;
    cin >> t;
    while(t--)
    {
        int cnt=0;
        cin >> row >> col;
        fori(1,row,1)
            forj(1,col,1)
                {
                cin >> temp;
                if(j==col && temp=='R')
                    cnt++;
                else if(i==row && temp=='D')
                    cnt++;
                }
         cout << cnt << nl;
    }
    return 0;
}


