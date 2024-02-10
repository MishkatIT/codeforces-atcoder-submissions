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

unordered_map<ll, ll> memo;

ll calc(ll n)
{
    if (n == 1) {
        return 0;
    } else if (memo.find(n) != memo.end()) {
        return memo[n];
    } else {
        ll result = n + calc(n / 2) + calc((n + 1) / 2);
        memo[n] = result;
        return result;
    }
}

int main()
{
    ll n;
    cin >> n;
    cout << calc(n);

    return 0;

}
