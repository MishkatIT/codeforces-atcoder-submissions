/*
    author    : MishkatIT
    created   : Wednesday 2024-01-10-22.03.47
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
        int n;
        cin >> n;
        string str;
        cin >> str;
        bool ok = true;
        for (int i = 0; i < n; i++) {
            int r = 0, b = 0;
            if (str[i] != 'W') {
                while (str[i] != 'W') {
                    r += (str[i] == 'R');
                    b += (str[i] == 'B');
                    if (i == n - 1) {
                        ok &= ((r > 0) & (b > 0));
                        break;
                    } else i++;
                }
                ok &= ((r > 0) & (b > 0));
            }
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}

