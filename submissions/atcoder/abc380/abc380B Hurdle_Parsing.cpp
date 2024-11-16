/*
    Author    : MishkatIT
    Created   : Saturday 16-11-2024 18:04:28
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
    vector<int> ans;
    int n = str.size();
    int cnt = 0;
    for (int i = 1; i < n; i++) {
        if (str[i] == '|') {
            ans.push_back(cnt);
            cnt = 0;
        } else cnt++;
    }
    int sz = ans.size();
    for (int i = 0; i < sz; i++) {
        cout << ans[i] << " \n"[i == sz - 1];
    }
    return 0;
}