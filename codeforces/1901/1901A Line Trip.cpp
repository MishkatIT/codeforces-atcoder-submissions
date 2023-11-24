/*
    author    : MishkatIT
    created   : Friday 2023-11-24-20.29.10
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
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> v(n);
        for (auto& i : v) {
            cin >> i;
        }
        int mx = v.front();
        for (int i = 0; i + 1 < n; i++) {
            mx = max(mx, abs(v[i + 1] - v[i]));
        }
        mx = max(mx, abs(v.back() - x) * 2);
        cout << mx << '\n';
    }
    return 0;
}

