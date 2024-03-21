/*
    author    : MishkatIT
    created   : Thursday 2024-03-21-23.51.17
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
        int n, x;
        cin >> n >> x;
        vector<int> v(n + 5), pos(n + 5);
        for (int i = 1; i <= n; i++) {
            cin >> v[i];
            pos[v[i]] = i;
        }
        int low = 1, high = n + 1, mid;
        set<int> midVis;
        while(high - low > 1) {
            mid = low + (high - low) / 2;
            midVis.insert(mid);
//        debug(low)debug(high)
            if (v[mid] > x) {
                high = mid;
            } else {
                low = mid;
            }
        }

        if (v[low] == x) {
            cout << 0 << '\n';
        }
        else  {
            cout << 1 << '\n';
            cout << low << ' ' << pos[x] << '\n';
            swap(v[low], v[pos[x]]);
        }
// else {
//            int pp = 1;
//            for (pp = 1; pp < low; pp++) {
//                if (midVis.find(pp) == midVis.end()) break;
//            }
//            cout << 2 << '\n';
//            cout << pos[x] << ' ' << pp << '\n';
////            swap(v[pp], v[pos[x]]);
//            cout << pp << ' ' << low << '\n';
////            swap(v[pp], v[low]);
//        }
////        debug(low)
////        debug(v[low])
//
//
//low = 1, high = n + 1, mid;
//
//        while(high - low > 1) {
//            mid = low + (high - low) / 2;
////        debug(low)debug(high)
//            if (v[mid] > x) {
//                high = mid;
//            } else {
//                low = mid;
//            }
//        }
//        debug(v[low])
    }
    return 0;
}

