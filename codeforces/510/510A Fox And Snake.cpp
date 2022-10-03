#include<bits/stdc++.h>
#define nl "\n"
#define fori(start,end,increment) for (int i = start; i < end; i+=increment)
#define forj(start,end,increment) for (int j = start; j < end; j+=increment)
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long int lli;
typedef long int li;
typedef long double llf;
using namespace std;
int main()
{
    fio;
    int row, col, cnt=0;
    cin >> row >> col;
    fori(0,row,1)
    {
        if(i%2==0)
        {
            forj(0,col,1)
            cout << "#";
            cout << nl;
        }
        else
        {
            if(cnt==0)
            {
                forj(0,col-1,1)
                cout << ".";
                cout << "#" << nl;

                cnt++;
            }
            else
            {
                cout << "#";
                forj(0,col-1,1)
                cout << ".";
                cout << nl;
                cnt--;
            }

        }
    }

}



