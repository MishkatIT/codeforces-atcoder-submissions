/*
    Author    : MishkatIT
    Created   : Saturday 12-10-2024 19:06:58
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
    int n = str.size();
    ll ans = 0;
    for (char c = 'A'; c <= 'Z'; c++) {
        int last = -1;
        vector<ll> temp;
        for (int i = n - 1; i >= 0; i--) {
            if (str[i] == c) {
                temp.push_back(i);
            }
        }
        ll len = temp.size();
        for (int j = 0; j < len; j++) {
            ans += (len - j - 1) * temp[j];
            ans -= j * temp[j];
            ans -= len - j - 1;
        }
    }
    cout << ans << '\n';
    return 0;
}