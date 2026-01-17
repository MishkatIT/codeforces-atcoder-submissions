/*
    Author    : MishkatIT
    Created   : Saturday 01-03-2025 18:05:55
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

    int n;
    cin >> n;
    vector<vector<char>> v(n, vector<char> (n, '.'));
    for (int i = 0; i < n; i += 2) {
        for (int j = i; j < n - i; j++) {
            v[i][j] = '#';
        }
        for (int j = i; j < n - i; j++) {
            v[j][i] = '#';
        }
        for (int j = i; j < n - i; j++) {
            v[n - i - 1][j] = '#';
        }
        for (int j = i; j < n - i; j++) {
            v[j][n - i - 1] = '#';
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << v[i][j];
        }
        cout << '\n';
    }
    return 0;
}