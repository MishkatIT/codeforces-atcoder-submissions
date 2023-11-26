/*
    author    : MishkatIT
    created   : Sunday 2023-11-26-20.55.12
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
        int n = 3;
        vector<int> v(n), ans(n);
        for (auto& i : v) {
            cin >> i;
        }
        for (int i = 0; i < n; i++) {
            ans[(i + 2) % 3] = ((v[i] + v[(i + 1) % 3]) % 2 == 0);
        }
        for (int i = 0; i < n; i++) {
            cout << ans[i] << " \n"[i == n - 1];
        }
    }
    return 0;
}

