/*
    author    : MishkatIT
    created   : Sunday 2024-02-11-21.49.41
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
        int a, b;
        cin >> a >> b;
        bool ok = false;
        if (a % 2 == 0) {
            if (a / 2 != b) ok = true;
        }
        if (b % 2 == 0) {
            if (b / 2 != a) ok = true;
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}

