/*
    Author    : MishkatIT
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
        string a, b;
        cin >> a >> b;
        int lena = a.size(), lenb = b.size();
        int mx = 0;
        for (int i = 0; i < lenb; i++) {
            for (int j = 0; j < lena; j++) {
                if (a[j] == b[i]) {
                    int tmx = 0;
                    int x = i;
                    for (int k = j; k < lena && x < lenb; k++) {
                        if (a[k] == b[x]) {
                            tmx++;
                            mx = max(tmx, mx);
                            x++;
                        }
                    }
                }
            }
        }
        // debug(mx);
        cout << lena + lenb - mx << '\n';
    }
    return 0;
}
