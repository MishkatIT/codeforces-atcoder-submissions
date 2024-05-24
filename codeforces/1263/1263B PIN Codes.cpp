/*
    Author    : MishkatIT
    Created   : Friday 24-05-2024 22:24:45
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
        map<string, vector<int>> mp; // string, pos
        for (int i = 0; i < n; i++) {
            string x;
            cin >> x;
            mp[x].push_back(i);
        }
        int change = 0;
        for (auto& i : mp) {
            change += (i.second.size() - 1);
            while(i.second.size() > 1) {
                string x = i.first;
                int pos = rand() % 4;
                char c = char(rand() % 10 + '0');
                x[pos] = c;
                if (mp.find(x) == mp.end()) {
                    mp[x].push_back(i.second.back());
                    i.second.pop_back();
                }
            }
        }
        cout << change << '\n';
        vector<string> ans(n);
        for (auto& i : mp) {
            ans[i.second.front()] = i.first;
        }
        
        for (int i = 0; i < n; i++) {
            cout << ans[i] << '\n';
        }
    }
    return 0;
}