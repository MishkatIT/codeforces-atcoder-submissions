/*
    author    : MishkatIT
    created   : Sunday 2023-12-24-20.29.37
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
        bool zero = false;
        int pos = 0;
        for (auto& i : v) {
            cin >> i;
            zero |= (i == 0);
            pos += (i > 0);
        }
        if (zero) {
            cout << 0 << '\n';
            continue;
        }
        if (pos == n) {
            cout << 1 << '\n';
            for (int i = 0; i < n; i++) {
                if (v[i] > 0) {
                    cout << i + 1 << " 0" << '\n'; break;

                }
            }
            continue;
        }
        int neg = n - pos;
        if (neg & 1) {
            cout << 0 << '\n';
        } else {
            cout << 1 << '\n';
            cout << "1 0" << '\n';
        }
    }
    return 0;
}

