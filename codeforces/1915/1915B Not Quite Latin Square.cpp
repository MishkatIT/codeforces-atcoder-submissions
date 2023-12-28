/*
    author    : MishkatIT
    created   : Friday 2023-12-29-01.04.17
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
        int x = ('A' + 'B' + 'C') * 3 + '?';
        for (int i = 0; i < 3 * 3; i++) {
            char c;
            cin >> c;
            x -= c;
        }
        cout << char(x) << '\n';
    }
    return 0;
}

