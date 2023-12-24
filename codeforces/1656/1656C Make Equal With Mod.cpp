/*
    author    : MishkatIT
    created   : Sunday 2023-12-24-23.31.54
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
        vector<int> v(n);
        for (auto& i : v) {
            cin >> i;
        }
        bool zero = 0, one = 0;
        for (auto& i : v) {
            zero |= (i == 0);
            one |= (i == 1);
        }

        if (zero & one) {
            cout << "NO" << '\n';
        } else if (!one) {
            cout << "YES" << '\n';
        } else {
            sort(v.begin(), v.end());
            bool ok = true;
            for (int i = 0; i + 1 < n; i++) {
                if (v[i + 1] == v[i] + 1) {
                    ok = false;
                    break;
                }
            }
            cout << (ok ? "YES" : "NO") << '\n';
        }
    }
    return 0;
}


