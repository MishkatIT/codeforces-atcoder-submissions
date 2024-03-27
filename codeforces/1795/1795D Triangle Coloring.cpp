/*
    author    : MishkatIT
    created   : Wednesday 2024-03-27-20.07.50
*/

#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';

using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 998244353;
const ll N      = 3e5 + 10;
const ll inf    = 1e9;
const ll linf   = 1e18;

void modNormalize(ll &x) { x %= mod; if (x < 0) x += mod; }

ll modMultiply(ll x, ll y) { x %= mod, y %= mod; modNormalize(x), modNormalize(y); return (x * y) % mod; }
ll modAdd(ll x, ll y) { x %= mod, y %= mod; modNormalize(x), modNormalize(y); return (x + y) % mod; }
ll modSubtract(ll x, ll y) { x %= mod, y %= mod; modNormalize(x), modNormalize(y); x -= y; modNormalize(x); return x; }

ll modPower(ll base, ll exponent) { ll result = 1; while (exponent > 0) { if (exponent & 1) result = modMultiply(result, base); base = modMultiply(base, base); exponent >>= 1; } return result; }
ll modInverse(ll x) { return modPower(x, mod - 2); }  // if mod is prime.
ll modDivide(ll x, ll y) { return modMultiply(x, modInverse(y)); }

ll fact[N];

void initFact() {
    fact[0] = 1;
    for (ll i = 1; i < N; ++i) {
        fact[i] = (fact[i - 1] * i) % mod;
    }
}


ll nCr(ll n, ll r) {
    if (r > n) return 0;
    ll numerator = fact[n];
    ll denominator = modMultiply(fact[r], fact[n - r]);
    return modMultiply(numerator, modInverse(denominator));
}

int main()
{
    fio;
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto& i : v) {
        cin >> i;
    }
    initFact();
    ll ans = nCr(n / 3, n / 6);
    vector<int> temp;
    for (int i = 0; i < n; i++) {
        temp.push_back(v[i]);
        if ((i + 1) % 3 == 0) {
            sort(temp.begin(), temp.end());
            if (temp.back() == temp.front()) {
                ans = modMultiply(ans, 3);
            } else if (temp[0] == temp[1] && temp[2] > temp[0]) {
                ans = modMultiply(ans, 2);
            }
            temp.clear();
        }
    }
    cout << ans;
    return 0;
}



