/*
    author    : MishkatIT
    created   : Tuesday 2024-01-30-20.18.46
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
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto& i : v) {
            cin >> i;
        }
        int ans = 0;
        int cur = 0;
        for (int i = 0; i < n; i++) {
            if (cur == 0) {
                cur = v[i];
            }
            cur &= v[i];
            if (cur == 0) {
                ans++;
            }
        }
        cout << max(ans, 1) << '\n';
    }
    return 0;
}


