/*
    Author    : MishkatIT
    Created   : Tuesday 23-04-2024 20:33:51
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
        vector<int> temp;
        for (int i = 0; i < n; i++) {
            temp.push_back(a[i] - b[i]);
            temp.push_back(a[i] + b[i]);
        }
        sort(temp.begin(), temp.end());
        cout << fixed << setprecision(4) << (temp.front() + temp.back()) / 2.0 << '\n';
    }
    return 0;
}