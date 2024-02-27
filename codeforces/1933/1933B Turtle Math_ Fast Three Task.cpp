/*
    author    : MishkatIT
    created   : Tuesday 2024-02-27-20.38.35
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
        ll sum = 0;
        for (int i = 0; i < n; i++) {
            sum += v[i];
        }
        if (sum % 3 == 0) {
            cout << 0 << '\n';
            continue;
        }
        if (sum % 3 == 2) {
            cout << 1 << '\n';
            continue;
        }
        int ans = 2;
        for (int i = 0; i < n; i++) {
            sum -= v[i];
            if (sum % 3 == 0) {
                ans = 1;
                break;
            }
            sum += v[i];
        }
        cout << ans << '\n';
    }
    return 0;
}

