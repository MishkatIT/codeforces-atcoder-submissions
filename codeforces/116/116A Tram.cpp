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
    int t, x, y, ans = 0, tmp = 0;
    cin >>t;
    while(t--)
    {
        cin >> x >> y;
        tmp = tmp-x+y;
        ans = max(ans, tmp);
    }
    cout << ans << nl;
}




