/*
    author    : MishkatIT
    created   : Tuesday 2024-02-13-01.02.03
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
        int ans = 0;
        int l = 0, r = 0;
        multiset<int> ms;
        ll sum = 0;
        while(r < n) {
            if (l == r && v[r] > k) {
                r++;
                l++;
                continue;
            }
            if (ms.find(v[r]) != ms.end()) {
                ms.insert(v[r++]);
            } else if (sum + v[r] <= k) {
                sum += v[r];
                ms.insert(v[r++]);
            } else {
                int left = v[l];
                sum -= v[l];
                ms.erase(v[l]);
                while(l < n && v[l] == left) {
                    l++;
                }
            }
            ans = max(ans, (int)ms.size());
            r = max(r, l);
        }
        cout << ans << '\n';
    }
    return 0;
}

