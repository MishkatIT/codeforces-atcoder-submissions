/*
    Author    : MishkatIT
    Created   : Saturday 02-11-2024 18:00:44
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

    vector<int> v;
    for (int i = 0 ;i < 4; i++) {
        int z; cin >> z;
        v.push_back(z);
    }
    sort(v.begin(), v.end());
    int ans = 0;
    for (int i = 1; i < 4;) {
        if (v[i] == v[i - 1]) ans++, i += 2;
        else i+=1;
    }
    cout << ans;
    return 0;
}