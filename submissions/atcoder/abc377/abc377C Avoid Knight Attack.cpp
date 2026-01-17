/*
    Author    : MishkatIT
    Created   : Saturday 26-10-2024 18:14:58
*/

#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

using ll = long long;
using ld = long double;
const int mod = 1e9 + 7;
const int N = 2e5 + 10;
const int inf = 1e9;
const ll linf = 1e18;


int dy[] = {+2, +1, -1, -2, -2, -1, +1, +2};
int dx[] = {+1, +2, +2, +1, -1, -2, -2, -1};
       //   RD  DR  DL  LD  LU  UL  UR  RU

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    cin >> n >> m;
    ll ans = n * n;
    map<pair<ll, ll>, bool> mp;
    for (int i = 0; i < m; i++) {
        ll a, b; cin >> a >> b;
        if (mp.find({a, b}) == mp.end()) ans--;
        mp[{a, b}] = true;
        for (int d = 0; d < 8; d++) {
            ll nx = a + dx[d];
            ll ny = b + dy[d];
            if (nx >= 1 && nx <= n && ny <= n && ny >= 1 && mp.find({nx, ny}) == mp.end()) {
                ans--;
                mp[{nx, ny}] = true;
            }
        }
    }
    cout << ans;
    return 0;
}