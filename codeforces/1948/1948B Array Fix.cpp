/*
    author    : MishkatIT
    created   : Saturday 2024-03-16-19.03.16
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
        int pos = -1;
        for (int i = 0; i + 1 < n; i++) {
            if (v[i] > v[i + 1]) {
                pos = i;
            }
        }
        if (pos == -1) {
            cout << "YES" << '\n';
        } else {
            string x;
            if (v[pos + 1] < 10) pos++;
            for (int i = 0; i <= pos; i++) {
                x += to_string(v[i]);
            }
            bool ok = true;
            for (int i = 0; i + 1 < x.size(); i++) {
                ok &= (x[i] <= x[i + 1]);
            }
            cout << (ok ? "YES" : "NO") << '\n';
        }
    }
    return 0;
}

