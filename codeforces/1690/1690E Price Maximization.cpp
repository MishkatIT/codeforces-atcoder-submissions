/*
    author    : MishkatIT
    created   : Sunday 2023-11-12-18.56.45
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
        vector<int> v(n);
        for (auto& i : v) {
            cin >> i;
        }
        ll ans = 0;
        vector<int> rem;
        for (auto& i : v) {
            ans += (i / k);
            rem.push_back(i % k);
        }
        sort(rem.begin(), rem.end());
        int l = 0, r = n - 1;
        while(l < r) {
            if (rem[l] + rem[r] >= k) {
                ans++;
                l++, r--;
            } else {
                l++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}


