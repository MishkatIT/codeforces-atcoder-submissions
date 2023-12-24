/*
    author    : MishkatIT
    created   : Monday 2023-12-25-01.13.06
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
        int n, a, b, c, d;
        cin >> n >> a >> b >> c >> d;
        if (n * (a - b) > (c + d) || n * (a + b) < (c - d)) {
            cout << "No" << '\n';
        } else {
            cout << "Yes" << '\n';
        }
    }
    return 0;
}


