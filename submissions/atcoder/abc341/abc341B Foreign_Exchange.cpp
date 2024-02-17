/*
    author    : MishkatIT
    created   : Saturday 2024-02-17-18.09.15
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

int main()
{
    fio;
    int n;
    cin >> n;
    vector<ll> v(n);
    for (auto& i : v) {
        cin >> i;
    }
    vector<pair<ll,ll>> x(n - 1);
    for (auto& i : x) {
        cin >> i.first >> i.second;
    }
    for (int i = 0; i + 1 < n; i++) {
        v[i + 1] += (v[i] / x[i].first * x[i].second);
    }
    cout << v.back() << '\n';
    return 0;
}

