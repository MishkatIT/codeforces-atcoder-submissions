/*
    author    : MishkatIT
    created   : Sunday 2023-11-12-23.33.37
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
        vector<bool> take(33);
        int x = n;
        while (k) {
            if (k - x >= 0) {
                take[x] = true;
                k -= x;
            }
            x--;
        }
        vector<int> ans(33);
        int cur = -1;
        int neg = 0;
        for (int i = 1; i <= n; i++) {
            if (take[i]) {
                neg += 1;
                cur = -(neg + 1);
                ans[n - i + 1] = neg;
            } else {
                ans[n - i + 1] = cur;
                neg += abs(cur);
            }
        }
        for (int i = 1; i <= n; i++) {
            cout << ans[i] << " \n"[i == n];
        }
    }
    return 0;
}
