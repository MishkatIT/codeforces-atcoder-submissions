/*
    author    : MishkatIT
    created   : Saturday 2023-07-08-20.51.18
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
const ll N      = 1e5 + 10;
const ll inf    = 1e9;
const ll linf   = 1e18;

void solve ()
{
    int n, x, y;
    cin >> n >> x >> y;
    int st = 0, dif = inf;
    for (int i = 1; i <= y; i++)
    {
        for (int j = 1; j < y; j++)
        {
            int cnt = 0;
            int nn = n;
            for (int k = i; k <= y && nn--; k += j)
            {
                if(k == x || k == y)cnt++;
                if(cnt == 2)
                {
                    if(j < dif)
                    {
                        st = i;
                        dif = j;
                    }
                }

            }
        }
    }
    for (int p = 0; p < n; p++)
    {
        cout << st << " \n"[p == n - 1];
        st += dif;
    }
    return;
}

int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
