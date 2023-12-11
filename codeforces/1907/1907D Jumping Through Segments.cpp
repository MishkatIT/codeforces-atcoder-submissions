/*
    author    : MishkatIT
    created   : Monday 2023-12-11-00.13.19
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
        vector<pair<int, int>> v(n);
        for (auto& i : v) {
            cin >> i.first >> i.second;
        }

        int low = 0, high = 1e9 + 123;
        int ans = 0;
        while (low <= high) {
            int mid = (low + high) >> 1;
            bool ok = true;
            int rangeL = 0, rangeR = mid;
            for (int i = 0; i < n; i++) {
                int a = v[i].first;
                int b = v[i].second;
                if (rangeR < a || rangeL > b) {
                    ok = false;
                    break;
                }
                rangeL = max(rangeL, a);
                rangeR = min(rangeR, b);
                rangeL = max(rangeL - mid, 0);
                rangeR = rangeR + mid;

            }
            if (ok) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}


