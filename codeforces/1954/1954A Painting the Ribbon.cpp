/*
    author    : MishkatIT
    created   : Saturday 2024-04-13-12.03.39
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
        int n, m, k;
        cin >> n >> m >> k;
        int x = (n / m) * (m - 1) + max(0, (n % m) - 1);
        cout << (k < x ? "YES" : "NO") << '\n';
    }
    return 0;
}

