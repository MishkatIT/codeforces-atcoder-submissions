/*
    Author    : MishkatIT
    Created   : Thursday 06-06-2024 00:48:09
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

    int n, k;
    cin >> n >> k;
    if (k > n || __builtin_popcount(n) > k) {
        cout << "NO" << '\n';
    } else {
        priority_queue<int> pq;
        for (int i = 0; i < 31; i++) {
            if ((1 << i) & n) {
                pq.push(1 << i);
            }
        }
        while (pq.size() < k) {
            pq.push(pq.top() / 2);
            pq.push(pq.top() / 2);
            pq.pop();
        }
        cout << "YES" << '\n';
        while (!pq.empty()) {
            cout << pq.top() << ' ';
            pq.pop();
        }
    }

    return 0;
}