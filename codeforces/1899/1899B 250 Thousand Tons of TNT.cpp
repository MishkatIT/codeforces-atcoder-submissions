/*
    author    : MishkatIT
    created   : Friday 2023-11-17-20.43.49
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
using ll = long long;
int main()
{
    fio;
    ll N = 150000;
    vector<set<ll>> divi(N + 10);
    for (ll i = 1; i * i <= N; i++) {
        for (ll j = i; j <= N; j += i) {
            divi[j].insert(i);
            divi[j].insert(j / i);
        }
    }
    ll t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        ll arr[n];
        for(ll i = 0; i < n; i++)
            cin >> arr[i];
        vector<ll> pre(n + 10);
        for (ll i = 1; i <= n; i++) {
            pre[i] = pre[i - 1] + arr[i - 1];
        }
        ll ans = 0;
        for (auto& i : divi[n]) {
            if (i == n && i != 1)break;
//            cout << 's' << i << '\n';
            ll mx = 0, mn = 1e18;
            for (ll x = i; x <= n; x += i) {
//                    cout << pre[x] - pre[x - i] << ' ';
                mx = max(mx, pre[x] - pre[x - i]);
                mn = min(mn, pre[x] - pre[x - i]);
            }
//            cout << '\n';
            ans = max(ans, abs(mx - mn));
        }
        cout << ans<< '\n';
    }

    return 0;
}
