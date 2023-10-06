/*
    author    : MishkatIT
    created   : Friday 2023-10-06-19.17.50
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
const ll N      = 1e5 + 10;
const ll inf    = 1e9;
const ll linf   = 1e18;

int main()
{
    fio;
    ll n, k;
    cin >> n >> k;
    vector<pair<ll, ll>> v(n);
    for (auto& i : v) {
        cin >> i.second >> i.first;
    }
    sort(v.rbegin(), v.rend());
    multiset<ll> s;
    ll ans = 0;
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        sum += v[i].second;
        s.insert(v[i].second);
        if(s.size() > k) {
            sum -= *s.begin();
            s.erase(s.begin());
        }
        ans = max(ans, sum * v[i].first);
    }
    cout << ans;
    return 0;
}

