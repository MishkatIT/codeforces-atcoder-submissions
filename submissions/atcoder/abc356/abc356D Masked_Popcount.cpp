/*
    Author    : MishkatIT
    Created   : Saturday 01-06-2024 18:29:27
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
const ll mod = 998244353;
const ll inf = 1e9;
const ll linf = 1e18;

int main() {
    ll n, m;
    cin >> n >> m;
    ll ans = 0;
    for (int bit = 0; bit < 60; ++bit) {
        ll segLen = 1LL << (bit + 1);
        ll fullSeg = (n + 1) / segLen;
        ll rem = (n + 1) % segLen;
        
        ll setBit = fullSeg * (segLen / 2);
        if (rem > (segLen / 2)) {
            setBit += (rem - (segLen / 2));
        }
        if (m & (1LL << bit)) {
            ans += setBit;
        }
        ans %= mod;
    }
    
    cout << ans << '\n';
    return 0;
}