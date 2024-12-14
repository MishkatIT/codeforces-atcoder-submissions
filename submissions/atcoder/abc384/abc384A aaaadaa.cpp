/*
    Author    : MishkatIT
    Created   : Saturday 14-12-2024 18:00:45
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

    int n; cin >> n;
    char a, b; cin >> a >> b;
    string str; cin >> str;
    char x = 'a';
    for (auto& i : str) {
        if (i != a) {
            i = b;
        }
    }
    cout << str;
    return 0;
}