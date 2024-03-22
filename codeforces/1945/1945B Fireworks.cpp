/*
    author    : MishkatIT
    created   : Friday 2024-03-22-16.54.32
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
        ll a, b, m;
        cin >> a >> b >> m;
        cout << (m / a) + 1 + (m / b) + 1 << '\n';
    }
    return 0;
}


