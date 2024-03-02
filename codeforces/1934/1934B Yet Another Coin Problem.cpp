/*
    author    : MishkatIT
    created   : Sunday 2024-03-03-03.38.59
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
        vector<int> c {15, 10, 6, 3, 1};
        int ans = n;
        for (int i = 1; i <= (1 << 5); i++) {
            int nn = n;
            int tans = 0;
            vector<int> cur;
            for (int j = 0; j < 5; j++) {
                if (i & (1 << j)) {
                    cur.push_back(c[j]);
                }
            }

            for (auto& j : cur) {
                if (nn >= j) {
                    nn -= j;
                    tans++;
                }
            }
             sort(cur.rbegin(), cur.rend());
            for (auto& j : cur) {
                tans += nn / j;
                nn %= j;
            }
            ans = min(ans, tans + nn);
        }
        cout << ans << '\n';
    }
    return 0;
}


