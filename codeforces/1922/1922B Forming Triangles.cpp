/*
    author    : MishkatIT
    created   : Saturday 2024-01-20-01.13.40
*/

#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';

using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
const ll N      = 3e5 + 10;
const ll inf    = 1e9;
const ll linf   = 1e18;

int main()
{
    fio;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> v(n);
        for (auto& i : v) {
            cin >> i;
        }
        map<int, int> f;
        for (auto& i : v) {
            f[i]++;
        }
        ll ans = 0;
        int tot = 0;
        for (auto& occur : f) {
            int x = occur.second;
            if (x > 1) {
                if (x > 2) {
                    ans += 1LL * x * (x - 1) * (x - 2) / (3 * 2 * 1);
                    ans += 1LL * x * (x - 1) / 2 * tot;
                    tot += x;

                } else {
                    tot += x;
//                    debug(tot)
                    ans += tot - x;
//                    debug(ans)
                }

            } else tot += x;
        }
        cout << ans << '\n';
    }
    return 0;
}


