 /*
     Author    : MishkatIT
     Created   : Wednesday 24-04-2024 18:37:48
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
 
    int n, q;
    cin >> n >> q;
    string str;
    cin >> str;
    string x = "abc";
    vector<string> all; // total permutation 3! = 6. 
    do {
        all.push_back(x);
    } while (next_permutation(x.begin(), x.end()));
    vector<vector<int>> pre(6, vector<int>(n + 1));
    for (int i = 0; i < 6; i++) {
        int z = 0;
        for (int j = 1; j <= n; j++) {
            pre[i][j] += pre[i][j - 1] + (all[i][z % 3] != str[j - 1]);
            z++;
        }
    }
    while (q--) {
    int l, r;
    cin >> l >> r;
    int ans = inf;
    for (int i = 0; i < 6; i++) {
        ans = min(ans, pre[i][r] - pre[i][l - 1]);
    }
    cout << ans << '\n';
    }   
     return 0;
 }
