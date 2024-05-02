/*
    Author    : MishkatIT
    Created   : Thursday 02-05-2024 21:59:30
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
        int n, k, posa, posb;
        cin >> n >> k >> posa >> posb;
        vector<int> permu(n + 5), v(n + 5);
        for (int i = 1; i <= n; i++) {
            cin >> permu[i];
        }
        for (int i = 1; i <= n; i++) {
            cin >> v[i];
        }
        priority_queue<ll> pqa, pqb;
        ll ansa = 0, ansb = 0;
        ll tota = 0, totb = 0;
        for (int i = 0; i < min(n, k); i++) {
            pqa.push(v[posa]);
            pqb.push(v[posb]);
            ansa = max(ansa, 1LL * (k - i) * pqa.top() + tota);
            ansb = max(ansb, 1LL * (k - i) * pqb.top() + totb);
            tota += v[posa];
            totb += v[posb];
            posa = permu[posa];
            posb = permu[posb];
        }
        if (ansa > ansb) {
            cout << "Bodya" << '\n';
        } else if (ansa < ansb) {
            cout << "Sasha" << '\n';
        } else {
            cout << "Draw" << '\n';
        }
    }
    return 0;
}