/*
    Author    : MishkatIT
    Created   : Sunday 18-05-2025 18:14:19
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

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;
    map<char, int> mp;
    for (int i = 0; i < str.size(); i++) {
        mp[str[i]]++;
    }
    bool ok = true;
    for (int i = 1; i <= 100; i++) {
        int cnt = 0;
        for (auto& x : mp) {
            if (x.second == i) cnt++;
        }
        if (cnt != 0 && cnt != 2) ok = false;
    }
    if (ok) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}