/*
    author    : MishkatIT
    created   : Friday 2023-12-29-15.27.28
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
        ll ans = 0;
        vector<bool> f(26, false);
        for (int i = 0; i < n; i++) {
            if (f[str[i] - 'a']) continue;
            f[str[i] - 'a'] = true;
            ans += (n - i);
        }
        cout << ans << '\n';
    }
    return 0;
}


