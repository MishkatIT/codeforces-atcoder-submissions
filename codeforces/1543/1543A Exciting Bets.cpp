/*
    author    : MishkatIT
    created   : Monday 2023-12-25-01.57.17
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
        ll a, b;
        cin >> a >> b;
        if (a == b) {
            cout << "0 0 " << '\n';
            continue;
        }
        if (a < b) swap(a, b);
        ll x = a - b;
        cout << x << ' ' << min(a % x, x - a % x) << '\n';
    }
    return 0;
}


