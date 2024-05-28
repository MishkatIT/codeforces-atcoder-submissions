/*
    Author    : MishkatIT
    Created   : Tuesday 28-05-2024 15:51:29
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
const ll N = 1e3 + 5;
const ll inf = 1e9;
const ll linf = 1e18;


vector<vector<array<int, 2>>> dp(N, vector<array<int, 2>>(N, {inf, inf})); 
void func(vector<vector<array<int, 2>>>& v) {
    dp[0][1] = dp[1][0] = {0, 0};
    int n = v.size() - 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            dp[i][j][0] = v[i][j][0] + min(dp[i - 1][j][0], dp[i][j - 1][0]);
            dp[i][j][1] = v[i][j][1] + min(dp[i - 1][j][1], dp[i][j - 1][1]);
        }
    }
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<vector<array<int, 2>>> v(n + 1, vector<array<int, 2>>(n + 1)); // first -> count of 2, second -> count of 5. 
    
    auto primefact = [&](int x) {
        array<int, 2> temp = {0, 0};
        while (x % 2 == 0) {
            temp[0]++;
            x /= 2;
        }
        while(x % 5 == 0) {
            temp[1]++;
            x /= 5;
        }
        return temp;
    };

    int zero = -1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            int x;
            cin >> x;
            if (x == 0) {
                zero = i;
                continue;
            }
            array<int, 2> temp = primefact(x);
            v[i][j]= temp;
        }
    }

    func(v);
    bool use0 = false;
    if (min(dp[n][n][0], dp[n][n][1]) > 1 && zero != -1) {
        use0 = true;
        for (int j = 1; j <= n; j++) {
            v[zero][j][0] = 0;
        }
        for (int i = 1; i <= zero; i++) {
            v[i][1][0] = 0;
        }
        for (int i = zero; i <= n; i++) {
            v[i][n][0] = 0;
        }
        func(v);
    }
    if (use0) {
        cout << 1 << '\n';
    } else {
        cout << min(dp[n][n][0], dp[n][n][1]) << '\n';
    }
    int mn = dp[n][n][0] > dp[n][n][1] ? 1 : 0;
    // debug(mn);
    string dir;
    int i = n, j = n;
    while (i > 1 || j > 1) {
        if (i - 1 == 0) {
            dir += "R";
            j--;
        } else if (j - 1 == 0) {
            dir += "D";
            i--;
        } else {
            if (dp[i - 1][j][mn] <= dp[i][j - 1][mn]) {
                dir += "D";
                i--;
            } else {
                dir += "R";
                j--;
            }
        }
    }
    // debug(dp);
    reverse(dir.begin(), dir.end());
    cout << dir << '\n';
    return 0;
}