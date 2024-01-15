/*
    author    : MishkatIT
    created   : Monday 2024-01-15-20.43.27
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
        string a, b;
        cin >> a >> b;
        int one, zero;
        one = zero = 0;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (b[i] != a[i]) {
                ans++;
                one += (a[i] == '1');
                zero += (a[i] == '0');
            }
        }
        int mn = min(one, zero);
        cout << ans - mn  << '\n';
    }
    return 0;
}

