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
    lli x, y, a, b, c;
    int t;
    cin >> t;
    while(t--)
    {
        cin >> a >> b >> c;
        x=(a-1);
        if(c>b)
            y=(c-b)+(c-1);
        else
            y = b-1;
        if(x<y)
            cout << "1" << nl;
        else if(x>y)
            cout << "2" << nl;
        else
            cout << "3" << nl;

    }
}


