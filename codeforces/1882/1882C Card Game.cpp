/*
    author    : MishkatIT
    created   : Tuesday 2023-09-26-01.05.38
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
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int>v(n);
        for (auto& i : v) {
            cin >> i;
        }
        if(n == 1) {
            cout << max(0, v.front()) << '\n';
            continue;
        }

        ll ans = max({0, v[0] + v[1], v[0]});
        for (int i = 2; i < n; i++) {
            ans += max(0, v[i]);
        }
        cout << ans << '\n';
    }
    return 0;
}

