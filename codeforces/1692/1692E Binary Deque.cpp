/*
    author    : MishkatIT
    created   : Thursday 2024-03-14-02.08.08
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
        int n, s;
        cin >> n >> s;
        vector<int> v(n);
        for (auto& i : v) {
            cin >> i;
        }
        int sum = 0;
        int ans = inf;
        int l = 0, r = 0;
        while(r < n) {
            sum += v[r++];
            if (sum == s) {
                ans = min(ans, n - (r - l));
            }
            if (sum > s) sum -= v[l++];
        }
        if (ans == inf) ans = -1;
        cout << ans << '\n';
    }
    return 0;
}


