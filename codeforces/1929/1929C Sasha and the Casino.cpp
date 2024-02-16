/*
    author    : MishkatIT
    created   : Friday 2024-02-16-23.50.26
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
        ll k, x, a;
        cin >> k >> x >> a;
        bool ok = true;
        ll sum = 0;
        for (int i = 1; i <= x; i++) {
            sum += sum / (k - 1) + 1;
            if (sum > a) {
                ok = false;
                break;
            }
        }
        ok &= (a - sum) * k > a;
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}


