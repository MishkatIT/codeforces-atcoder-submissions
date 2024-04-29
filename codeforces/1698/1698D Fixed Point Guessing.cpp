/*
    Author    : MishkatIT
    Created   : Tuesday 30-04-2024 02:07:55
*/

#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

using ll = long long;
using ld = long double;
const ll mod = 1e9 + 7;
const ll N = 2e5 + 10;
const ll inf = 1e9;
const ll linf = 1e18;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        int low = 1, high = n;
        while(low <= high) {
            int mid = low + (high - low) / 2;
            cout << "? " << low << ' ' << mid << endl;
            vector<int> resp(mid - low + 1);
            for (auto& i : resp) {
                cin >> i;
            }
            int tot = 0;
            for (auto& i : resp) {
                tot += (i >= low && i <= mid);
            }
            if (tot & 1) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        cout << "! " << low << endl;
    }
    return 0;
}