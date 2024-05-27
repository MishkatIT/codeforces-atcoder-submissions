/*
    Author    : MishkatIT
    Created   : Tuesday 28-05-2024 02:20:24
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

ll bfs(ll n, ll x) {
    queue<ll> q;
    q.push(x);
    map<ll, ll> mp;
    mp[x] = 0;
    while (!q.empty()) {
        ll cur = q.front();
        q.pop();
        auto Length = [] (ll cur) {
            string x;
            x = to_string(cur);
            return x.length();
        };
        // cout << Length(cur) <<  ' ' << mp[cur] << '\n';;
        if (Length(cur) == n) {
            return mp[cur];
        }
        ll temp = cur;
        while (temp) {
            int x = temp % 10;
            if(x > 1 && !mp[cur * x]) {
                q.push(cur * x);
                mp[cur * x] = mp[cur] + 1;
            }
            temp /= 10;
        }
    }
    return -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, x;
    cin >> n >> x;
    cout << bfs(n, x) << '\n';
    return 0;
}