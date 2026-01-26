/*
    author    : MishkatIT
    created   : Friday 2023-08-04-00.12.10
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
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (auto& i : v) {
        cin >> i;
    }
    vector<ll> pref(n + 10);
    for (int i = 1; i <= n; i++) {
        pref[i] = pref[i - 1] + v[i - 1];
    }
    while(q--) {
        int l, r;
        cin >> l >> r;
        cout << pref[r] - pref[l - 1] << '\n';
    }
    return 0;
}