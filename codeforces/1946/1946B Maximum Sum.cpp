/*
    author    : MishkatIT
    created   : Saturday 2024-03-23-00.46.40
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

void modNormalize(ll &x) { x %= mod; if (x < 0) x += mod; }

ll modMultiply(ll x, ll y) { x %= mod, y %= mod; modNormalize(x), modNormalize(y); return (x * y) % mod; }
ll modAdd(ll x, ll y) { x %= mod, y %= mod; modNormalize(x), modNormalize(y); return (x + y) % mod; }
ll modSubtract(ll x, ll y) { x %= mod, y %= mod; modNormalize(x), modNormalize(y); x -= y; modNormalize(x); return x; }

ll modPower(ll base, ll exponent) { ll result = 1; while (exponent > 0) { if (exponent & 1) result = modMultiply(result, base); base = modMultiply(base, base); exponent >>= 1; } return result; }
ll modInverse(ll x) { return modPower(x, mod - 2); }  // if mod is prime.
ll modDivide(ll x, ll y) { return modMultiply(x, modInverse(y)); }

int main()
{
    fio;
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (auto& i : v) {
            cin >> i;
        }
        ll mx = 0;
        ll sum = 0;
        int s = n, e = n;
        int l = 0;
        for (int i = 0; i < n; i++) {
            sum += v[i];
            if (sum < 0) {
                l = i + 1;
                sum = 0;
            }
            if (sum > mx) {
                mx = sum;
                s = l;
                e = i;
            }
        }

        ll ans = mx;

        while(k--) {
            ans = modAdd(mx, ans);
            mx = modAdd(mx, mx);
        }
        for (int i = 0; i < s; i++) {
            ans += v[i];
            modNormalize(ans);
        }
        for (int i = e + 1; i < n; i++) {
            ans += v[i];
            modNormalize(ans);
        }
        cout << ans << '\n';
    }
    return 0;
}


