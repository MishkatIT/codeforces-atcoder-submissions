/*
    Author    : MishkatIT
    Created   : Saturday 01-02-2025 22:57:45
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
const int mod = 1e9 + 7;
const int N = 2e5 + 10;
const int inf = 1e9;
const ll linf = 1e18;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;
    vector<int> pos(n + 5);
    iota(pos.begin(), pos.end(), 0);
    vector<int> v(n + 5, 1);
    map<int, int> dupli;
    while (q--) {
        int t; cin >> t;
        if (t == 1) {
            int a, b; cin >> a >> b;
            v[pos[a]]--, v[b]++;
            if (dupli.count(pos[a])) {
                dupli[pos[a]]--;
                if (dupli[pos[a]] == 0) dupli.erase(pos[a]);
            }
            if (v[b] > 1) dupli[b]++;
            pos[a] = b;
        } else {
            cout << dupli.size() << '\n';
        }
    }
    return 0;
}