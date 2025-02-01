/*
    Author    : MishkatIT
    Created   : Saturday 01-02-2025 22:41:41
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

    string str;
    cin >> str;
    map<char, char> mp;
    mp['S'] = 'N';
    mp['N'] = 'S';
    mp['W'] = 'E';
    mp['E'] = 'W';
    for (auto& i : str) {
        cout << mp[i];
    }
    return 0;
}