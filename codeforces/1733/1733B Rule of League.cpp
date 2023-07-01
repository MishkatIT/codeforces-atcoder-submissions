/*
    author    : MishkatIT
    created   : Saturday 2023-07-01-19.52.54
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;
const ll N = 1e5 + 10;
const ll inf = 1e9;
const ll linf = 1e18;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        if((x > 0 && y > 0) || (x == 0 && y == 0) || ((n - 1) % max(x, y) != 0))
        {
            cout << -1 << '\n';
            continue;
        }
        int mx = max(x, y);
        bool ok = true;
        for (int i = 1; i <= n; i++)
        {
            int z = mx;
            int p = i;
            while(z--)
            {
                cout << p << ' ';
                i++;
            }
            if(!ok)i--;
            ok = false;
        }
        cout << '\n';
    }
    return 0;
}

