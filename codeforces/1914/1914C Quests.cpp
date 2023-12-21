/*
    author    : MishkatIT
    created   : Thursday 2023-12-21-13.31.36
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
        int n, k;
        cin >> n >> k;
        vector<int> a(n), b(n);
        for (auto& i : a) {
            cin >> i;
        }
        for (auto& i : b) {
            cin >> i;
        }
        int ans = 0;
        int sum = 0;
        int mx = 0;
        for (int i = 0; i < n && i < k; i++) {
            sum += a[i];
            mx = max(mx, b[i]);
            ans = max(ans, sum + mx * (k - i - 1));
        }
        cout << ans << '\n';
    }
    return 0;
}


