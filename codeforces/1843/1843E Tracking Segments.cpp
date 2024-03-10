/*
    author    : MishkatIT
    created   : Monday 2024-03-11-01.46.15
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

struct idx {
    int l, r;
};

int main()
{
    fio;
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<idx> seg(m + 5);
        for (int i = 1; i <= m; i++) {
            cin >> seg[i].l >> seg[i].r;
        }
        int q;
        cin >> q;
        vector<int> cng(q + 5);
        for (int i = 1; i <= q; i++) {
            cin >> cng[i];
        }
        int ans = inf;
        int low = 1, high = q;
        while(low <= high) {
            int mid = (low + high) / 2;
            vector<int> pref(n + 5);
            for (int i = 1; i <= mid; i++) {
                pref[cng[i]] = 1;
            }
            for (int i = 1; i <= n; i++) {
                pref[i] += pref[i - 1];
            }
            int tans = inf;
            for (int i = 1; i <= m; i++) {
                if (pref[seg[i].r] - pref[seg[i].l - 1] >= (seg[i].r - seg[i].l + 1) / 2 + 1) {
                    tans = min(tans, mid);
                }
            }
            if (tans != inf) {
                ans = min(ans, tans);
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        if (ans == inf) {
            cout << -1 << '\n';
        } else {
            cout << ans << '\n';
        }
    }
    return 0;
}


