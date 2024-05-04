/*
    Author    : MishkatIT
    Created   : Saturday 04-05-2024 18:10:32
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

    string s, t;
    cin >> s >> t;
    int i = 0;
    for (int j = 0; j < t.size(); j++) {
        if (i >= s.size()) break;
        if (s[i] == t[j]) {
            cout << j + 1 << ' ';
            i++;
        }
    }
    return 0;
}