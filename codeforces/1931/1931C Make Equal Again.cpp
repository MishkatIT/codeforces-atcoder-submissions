/*
    author    : MishkatIT
    created   : Tuesday 2024-02-13-20.49.09
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
        int l = 0, r = n - 1;
        while(l + 1 < n && v[l + 1] == v[l])
            l++;

        while(r - 1 >= 0 && v[r - 1] == v[r])r--;
        int ans = 0;
        if (r < l || n == 1) ans = 0;
        else {
            ans = r - l - 1;
            if (v.front() != v.back()) ans += min(l + 1, n - r);
        }
        cout << ans << '\n';
    }
    return 0;
}

