/*
    Author    : MishkatIT
    Created   : Monday 03-06-2024 21:19:58
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

        vector<int> a(n);
        for (auto& i : a) {
            cin >> i;
        }
        vector<int> b(n);
        for (auto& i : b) {
            cin >> i;
        }
        int m;
        cin >> m;
        vector<int> d(m);
        for (auto& i : d) {
            cin >> i;
        }
        map<int, int> mp, have;
        for (int i = 0; i < n; i++) {
            if (a[i] != b[i]) {
                mp[b[i]]++;

            } 
            have[b[i]] = 1;
        }
        map<int, int> mpd;
        for (auto& i : d) {
            mpd[i]++;
        }
        bool ok = true;
      
        for (auto& i : mp) {
            if (mpd[i.first] < i.second) {
                ok = false;
            }
        }
        bool xd = true;
        for (auto& i : d) {
            if (!have[i]) xd = false;
            else xd = true;
        }
        ok &= xd;
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}