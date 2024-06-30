/*
    Author    : MishkatIT
    Created   : Monday 01-07-2024 02:08:08
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

    int n; cin >> n;
    string str; cin >> str;
    if (n & 1) {
        cout << 1 << '\n';
        cout << str << '\n';
        return 0;
    }
    if (count(str.begin(), str.end(), '0') != n / 2) {
        cout << 1 << '\n';
        cout << str << '\n';
    } else {
        cout << 2 << '\n';
        cout << str.front() << ' ' << str.substr(1) << '\n';
    }
    return 0;
}