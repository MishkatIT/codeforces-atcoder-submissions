/*
    author    : MishkatIT
    created   : Tuesday 2024-01-09-23.43.46
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
#define int long long
signed main()
{
    fio;
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        int l = (a * b) / __gcd(a, b);
        if (a < b) swap(a, b);
        if (l == a) {
            l *= (a / b);
        }
        cout << l << '\n';
    }
    return 0;
}

