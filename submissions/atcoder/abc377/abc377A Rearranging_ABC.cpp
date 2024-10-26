/*
    Author    : MishkatIT
    Created   : Saturday 26-10-2024 18:00:45
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
    sort(str.begin(), str.end());
    cout << ((str == "ABC")? "Yes" : "No") << '\n';
    return 0;
}