/*
    author    : MishkatIT
    created   : Wednesday 2024-02-21-02.30.44
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
        for (int i = 0; i < n; i++) {
            char x;
            cin >> x;
            v[i] = x - '0' - 1;
        }
        map<ll, int> mp;
        ll ans = 0;
        ll sum = 0;
        for (auto& i : v) {
            sum += i;
            mp[sum]++;
            if (sum == 0) {
                ans += mp[sum];
            } else {
                ans += mp[sum] - 1;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}


