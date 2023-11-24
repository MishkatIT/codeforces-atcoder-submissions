/*
    author    : MishkatIT
    created   : Friday 2023-11-24-20.59.52
*/

#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';

using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
const ll N      = 2e5 + 10;
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
        vector<ll> v(n + 10);
        v.front() = 1;
        for (int i = 1; i <= n; i++) cin >> v[i];
        ll cnt = 0;
        for (int i = 1; i <= n; i++) {
            cnt += max(0LL, v[i] - v[i - 1]);
//            debug(cnt)
        }
        cout << cnt << '\n';

    }
    return 0;
}

