/*
    author    : MishkatIT
    created   : Thursday 2024-02-29-13.55.32
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
        int n, k;
        cin >> n >> k;
        vector<int> pos(k), val(k);
        for (auto& i : pos) {
            cin >> i;
        }
        for (auto& i : val) {
            cin >> i;
        }
        vector<ll> ac(n, linf);
        for (int i = 0; i < k; i++) {
            ac[pos[i] - 1] = val[i];
        }

        vector<ll> dpl(n, linf), dpr(n, linf);
        dpl[0] = min(dpl[0], ac[0]);
        for (int i = 1; i < n; i++) {
            dpl[i] = min(dpl[i - 1] + 1, ac[i]);
        }
        dpr[n - 1] = min(dpr[n - 1], ac[n - 1]);
        for (int i = n - 2; i >= 0; i--) {
            dpr[i] = min(dpr[i + 1] + 1, ac[i]);
        }
        for (int i = 0; i < n; i++) {
            cout << min(dpl[i], dpr[i]) << " \n"[i == n - 1];
        }
    }
    return 0;
}



