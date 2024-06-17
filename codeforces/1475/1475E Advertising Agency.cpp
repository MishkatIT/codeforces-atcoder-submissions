/*
    Author    : MishkatIT
    Created   : Tuesday 18-06-2024 02:05:14
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
const ll mod = 1e9 + 7;
const ll N = 1e3 + 10;
const ll inf = 1e9;
const ll linf = 1e18;

void modNormalize(ll &x) { x %= mod; if (x < 0) x += mod; }
ll modMultiply(ll x, ll y) { x %= mod, y %= mod; modNormalize(x), modNormalize(y); return (x * y) % mod; }
ll modAdd(ll x, ll y) { x %= mod, y %= mod; modNormalize(x), modNormalize(y); return (x + y) % mod; }
ll modSubtract(ll x, ll y) { x %= mod, y %= mod; modNormalize(x), modNormalize(y); x -= y; modNormalize(x); return x; }
ll modPower(ll base, ll exponent) { ll result = 1; while (exponent > 0) { if (exponent & 1) result = modMultiply(result, base); base = modMultiply(base, base); exponent >>= 1; } return result; }
ll modInverse(ll x) { return modPower(x, mod - 2); }  // if mod is prime.
ll modDivide(ll x, ll y) { return modMultiply(x, modInverse(y)); }

ll fact[N + 1];

void initFact() {
    fact[0] = 1;
    for (int i = 1; i <= N; ++i) {
        fact[i] = (fact[i - 1] * i) % mod;
    }
}

ll nCr(int n, int r) {
    if (r > n) return 0;
    ll numerator = fact[n];
    ll denominator = modMultiply(fact[r], fact[n - r]);
    return modMultiply(numerator, modInverse(denominator));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    initFact();
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        sort(v.rbegin(), v.rend());
        map<int, int> all, ans;
        for (auto& i : v) {
            all[i]++;
        }
        for (int i = 0; i < k; i++) {
            ans[v[i]]++;
        }
        ll ways = 1;
        for (auto& i : ans) {
            ways = modMultiply(ways, nCr(all[i.first], i.second));
        }
        cout << ways << '\n';
    }
    return 0;
}