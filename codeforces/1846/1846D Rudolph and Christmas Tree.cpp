/*
    author    : MishkatIT
    created   : Friday 2023-07-07-22.13.10
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll = long long;
using ld = long double;
const ll mod = 1e9 + 7;
const ll N = 1e5 + 10;
const ll inf = 1e9;
const ll linf = 1e18;
int main()
{
    fio;
    ld t;
    cin >> t;
    while(t--)
    {
        ld n, d, h;
        cin >> n >> d >> h;
        vector<ld> v(n);
        for (auto& i: v) cin >> i;
        ld area = (d * h) / 2;
        ld ans = area;
        for (ld i = 1; i < n; i++)
        {
            ld ex = 0;
            if(v[i] - v[i - 1] < h)
            {
                ld hh = h - (v[i] - v[i - 1]);
                ld dd = (d / h) * hh;
                ex = (hh * dd) / 2;
            }
            ans += (area - ex);
        }
        cout << setprecision(17) << ans << '\n';
    }
    return 0;
}

