/*
    author    : MishkatIT
    created   : Tuesday 2024-02-13-20.23.39
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

void solve()
{
    int n;
    cin >> n;
    for (int i = 1; i <= 26; i++) {
        for (int j = 1; j <= 26; j++) {
            for (int k = 1; k <= 26; k++) {
                if (i + j + k == n) {
                    cout << (char)('a' + i - 1) << (char)('a' + j - 1) << (char)('a' + k - 1) << '\n';
                    return;
                }
            }
        }
    }
}

int main()
{
    fio;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

