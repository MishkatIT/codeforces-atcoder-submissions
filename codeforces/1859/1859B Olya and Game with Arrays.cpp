/*
    author    : MishkatIT
    created   : Saturday 2023-10-21-22.27.01
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
        ll mn1 = inf, mn = inf;
        ll sum = 0;
        for (int i = 0; i < n; i++) {
            int m;
            cin >> m;
            vector<ll> v(m);
            for (auto& i: v) {
                cin >> i;
            }
            sort(v.begin(), v.end());
            sum += v[1];
            if(v[1] <= mn1) {
                mn1 = v[1];
            }
            mn = min(mn, v[0]);
        }
        cout << sum - mn1 + min(mn1, mn) << '\n';
    }
    return 0;
}

