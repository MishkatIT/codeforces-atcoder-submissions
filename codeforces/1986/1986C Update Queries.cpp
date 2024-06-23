/*
    Author    : MishkatIT
    Created   : Sunday 23-06-2024 21:09:59
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

    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        string str;
        cin >> str;
        map<int, int> mp;
        for (int i = 0; i < m; i++) {
            int x;
            cin >> x;
            mp[x]++;
        }
        deque<char> c(m);
        for (auto& i : c) cin >> i;
        sort(c.begin(), c.end());
        for (auto& i : mp) {
            int cnt = i.second - 1;
            while (cnt > 0) {
                cnt--;
                c.pop_back();
            }
            str[i.first - 1] = c.front();
            c.pop_front();
        }
        cout << str << '\n';
    }
    return 0;
}