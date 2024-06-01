/*
    Author    : MishkatIT
    Created   : Saturday 01-06-2024 18:21:29
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

    int n, m, k;
    cin >> n >> m >> k;
    
    vector<vector<int>> t(m);
    vector<char> r(m);
    
    for (int i = 0; i < m; ++i) {
        int c;
        cin >> c;
        t[i].resize(c);
        for (int j = 0; j < c; ++j) {
            cin >> t[i][j];
            t[i][j]--; 
        }
        cin >> r[i];
    }
    
    int valid = 0;
    
    for (int mask = 0; mask < (1 << n); ++mask) {
        bool isValid = true;
        
        for (int i = 0; i < m; ++i) {
            int realCnt = 0;
            for (int key : t[i]) {
                if (mask & (1 << key)) {
                    realCnt++;
                }
            }
            if ((r[i] == 'o' && realCnt < k) || (r[i] == 'x' && realCnt >= k)) {
                isValid = false;
                break;
            }
        }
        
        if (isValid) {
            valid++;
        }
    }
    
    cout << valid << endl;

    return 0;
}
