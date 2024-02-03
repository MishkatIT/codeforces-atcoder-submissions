/*
    author    : MishkatIT
    created   : Saturday 2024-02-03-21.56.05
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

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> line(n);
    vector<array<ll, 3>> para(m);
    for (auto& i : line) cin >> i;
    for (auto& i : para) cin >> i[0] >> i[1] >> i[2];

    sort(line.begin(), line.end());

 auto possible = [&](ll a, ll b, ll c) -> ll {
    auto it = lower_bound(line.begin(), line.end(), b);
    ll k = inf;

    if (!line.empty()) {
        if (it != line.end()) {
            k = *it;
        }
        if (it != line.begin()) {
            --it;
            if (abs(*it - b) < abs(k - b)) {
                k = *it;
            }
            ++it;
        }
        if (it != line.end()) {
            ++it;
            if (it != line.end() && abs(*it - b) < abs(k - b)) {
                k = *it;
            }
        }
    }
    return (((b - k) * (b - k) < 4 * a * c) ? k : inf);
};


    for (auto& i : para) {
        ll cur = possible(i[0], i[1], i[2]);
        if (cur != inf) {
            cout << "YES" << '\n';
            cout << cur << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
    return;
}

int main()
{
    fio;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}


