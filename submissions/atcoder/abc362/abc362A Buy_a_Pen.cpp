/*
    Author    : MishkatIT
    Created   : Saturday 13-07-2024 18:36:19
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

    int a, b, c;
    cin >> a >> b >> c;
    string str;
    cin >> str;
    char x = str.front();
    if (x == 'R') cout << min(b, c) << '\n';
    if (x == 'G') cout << min(a, c) << '\n';
    if (x == 'B') cout << min(a, b) << '\n';

    return 0;
}