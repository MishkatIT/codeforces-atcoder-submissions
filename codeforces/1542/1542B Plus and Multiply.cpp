/*
    author    : MishkatIT
    created   : Tuesday 2023-08-01-21.06.53
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
        ll n, a, b;
        cin >> n >> a >> b;

        // n = pow(a, x) + b * y
        bool ok = false;
        if (a == 1) {
            if((n - 1) % b == 0) {
                ok = true;
            }
        } else {
            ll curA = 1;
            while(curA <= n) {
                if((n - curA) % b == 0) {
                    ok = true;
                    break;
                }
                curA *= a;
            }
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}

