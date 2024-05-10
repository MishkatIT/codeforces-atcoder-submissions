/*
    Author    : MishkatIT
    Created   : Friday 10-05-2024 20:37:10
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
        string str, x;
        cin >> str;
        x = str;
        sort(str.begin(), str.end());
        if (str.front() == str.back()) {
            cout << "NO" << '\n';
        } else {
            cout << "YES" << '\n';
            if (x == str) {
                swap(str.front(), str.back());
            }
            cout << str << '\n';
        }
    }
    return 0;
}