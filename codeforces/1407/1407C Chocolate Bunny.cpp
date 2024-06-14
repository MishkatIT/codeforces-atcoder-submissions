/*
    Author    : MishkatIT
    Created   : Friday 14-06-2024 22:29:36
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

        int n;
        cin >> n;
        vector<int> p(n + 1);
        int f = 1, s = 2;
        int sum = n * (n + 1) / 2;
        int cnt = n;

        auto ask = [&](int i, int j) {
            cout << "? " << i << ' ' << j << endl;
            int resp;
            cin >> resp;
            return resp;
        };

        while (cnt > 1) {
            cnt--;
            int x = ask(f, s);
            int y = ask(s, f);
            if (x > y) {
                p[f] = x;
                sum -= x;
            } else {
                p[s] = y;
                sum -= y;
            }
            while (p[f] != 0) f++;
            s++;
        }
        cout << "! ";
        for (int i = 1; i <= n; i++) {
            if (p[i] == 0) p[i] = sum;
            cout << p[i] << ' ';
        }
        cout << endl;
    return 0;
}