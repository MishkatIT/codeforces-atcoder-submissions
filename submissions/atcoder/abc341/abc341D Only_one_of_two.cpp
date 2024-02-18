/*
    author    : MishkatIT
    created   : Sunday 2024-02-18-14.04.03
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

ll possible(ll n, ll m, ll k)
{
    ll low = 0, high = linf;
    ll lcm = (n * m) / __gcd(n, m);

    ll ans = linf;
    while(low <= high) {
        ll mid = low + (high - low) / 2LL;
        ll a = mid / n;
        ll b = mid / m;
        ll c = (a + b) - 2 * (mid / lcm);
        if (c == k) {
            ans = min(ans, mid);
            high = mid - 1;
        } else if(c < k){
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}
int main()
{
    fio;
    ll n, m, k;
    cin >> n >> m >> k;
    cout << possible(n, m, k) << '\n';
    return 0;
}


