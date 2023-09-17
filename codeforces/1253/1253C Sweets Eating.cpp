/*
    author    : MishkatIT
    created   : Sunday 2023-09-17-17.16.52
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
    int n, m;
    cin >> n >> m;
    vector<ll>v(n);
    for (auto& i : v) {
        cin >> i;
    }

    sort(v.begin(), v.end());
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        if(i >= m) {
            v[i] += v[i - m];
        }
        ans += v[i];
        cout << ans << ' ';
    }
    return 0;
}
