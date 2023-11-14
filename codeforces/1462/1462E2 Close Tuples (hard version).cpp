/*
    author    : MishkatIT
    created   : Tuesday 2023-11-14-20.12.06
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

void modNormalize(ll &x)
{
    x %= mod;
    if (x < 0) x += mod;
}

ll modMultiply(ll x, ll y)
{
    x %= mod, y %= mod;
    modNormalize(x), modNormalize(y);
    return (x * y) % mod;
}
ll modAdd(ll x, ll y)
{
    x %= mod, y %= mod;
    modNormalize(x), modNormalize(y);
    return (x + y) % mod;
}
ll modSubtract(ll x, ll y)
{
    x %= mod, y %= mod;
    modNormalize(x), modNormalize(y);
    x -= y;
    modNormalize(x);
    return x;
}

ll modPower(ll base, ll exponent)
{
    ll result = 1;
    while (exponent > 0) {
        if (exponent & 1) result = modMultiply(result, base);
        base = modMultiply(base, base);
        exponent >>= 1;
    }
    return result;
}
ll modInverse(ll x)
{
    return modPower(x, mod - 2);    // if mod is prime.
}
ll modDivide(ll x, ll y)
{
    return modMultiply(x, modInverse(y));
}

ll fact[N];

void initFact()
{
    fact[0] = 1;
    for (ll i = 1; i < N; ++i) {
        fact[i] = (fact[i - 1] * i) % mod;
    }
}


ll nCr(ll n, ll r)
{
    if (r > n) return 0;
    ll numerator = fact[n];
    ll denominator = modMultiply(fact[r], fact[n - r]);
    return modMultiply(numerator, modInverse(denominator));
}

int main()
{
    fio;
    initFact();
    int t;
    cin >> t;
    while (t--) {
        ll n, m, k;
        cin >> n >> m >> k;
        vector<ll> v(n);
        for (auto& i: v) {
            cin >> i;
        }
        sort(v.begin(), v.end());
        ll ans = 0;
        auto possible = [&](ll st) {
            ll low = st;
            ll high = n - 1;
            ll mx = st;
            while(low <= high) {
                ll mid = low + (high - low) / 2;
                if (v[mid] - v[st] <= k) {
                    low = mid + 1;
                    mx = mid;
                } else {
                    high = mid - 1;
                }
            }
            ll tot = mx - st;
            if (tot >= m - 1) {
                return nCr(tot, m - 1);
            }
            return 0LL;
        };
        for (int i = 0; i < n - m + 1; i++) {
            ans = modAdd(ans, possible(i));
        }
        cout << ans << '\n';
    }
    return 0;
}


