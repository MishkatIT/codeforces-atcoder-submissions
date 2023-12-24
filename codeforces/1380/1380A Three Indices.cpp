/*
    author    : MishkatIT
    created   : Monday 2023-12-25-02.18.18
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
        int idx = -1;
        for (int i = 1; i + 1 < n; i++) {
            if (v[i - 1] < v[i] && v[i] > v[i + 1]) {
                idx = i + 1;
                break;
            }
        }
        if (idx != -1) {
            cout << "YES" << '\n';
            cout << idx - 1 << ' ' << idx << ' ' << idx + 1 << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
    return 0;
}


