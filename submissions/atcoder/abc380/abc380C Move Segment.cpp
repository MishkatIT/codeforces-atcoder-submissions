/*
    Author    : MishkatIT
    Created   : Saturday 16-11-2024 19:03:01
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

    int n, k;
    cin >> n >> k;
    string str;
    cin >> str;

    string ans;
    int b = 0;
    vector<pair<int, int>> f;
    for (int i = 0; i < n; ) {
        int j = i;
        while (j < n && str[j] == str[i]) j++;
        f.push_back({str[i] - '0', j - i});
        i = j;
    }
    for (int i = 0; i < f.size(); i++) {
        if (f[i].first == 1) {
            b++;
            if (b == k) {
                swap(f[i], f[i - 1]);
            }
        }
    }
    // debug(f);
    for (auto& i : f) {
        for (int j = 0; j < i.second; j++) {
            cout << i.first;
        }
    }
    return 0;
}