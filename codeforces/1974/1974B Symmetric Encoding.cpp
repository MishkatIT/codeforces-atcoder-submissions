/*
    Author    : MishkatIT
    Created   : Monday 20-05-2024 20:52:02
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
        int n;
        cin >> n;
        string str;
        cin >> str;
        set<char> s (str.begin(), str.end());
        string r;
        for (auto& i : s) {
            r.push_back(i);
        }
        
        int len = r.size();
        map<char, char> mp;
        for (int i = 0; i < len; i++) {
            mp[r[i]] = r[len - i - 1];
        }
        
        for (auto& i : str) {
            cout << mp[i];
        }
        cout << '\n';
    }
    return 0;
}