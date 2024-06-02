/*
    Author    : MishkatIT
    Created   : Sunday 02-06-2024 21:03:25
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

    string str;
    cin >> str;
    map<char, int> mp;
    for (auto& i : str) {
        mp[i]++;
    }   
    bool ok = false;
    if (mp.size() == 2) {
        bool temp = true;
        for (auto& i : mp) {
            temp &= i.second > 1;
        }
        ok |= temp;
    }
    if (mp.size() == 3) {
        bool temp = false;
        for (auto& i : mp) {
            temp |= i.second > 1;
        }
        ok |= temp;
    }
    if (mp.size() == 4) ok = true;
    cout << (ok ? "Yes" : "No") << '\n';
    return 0;
}