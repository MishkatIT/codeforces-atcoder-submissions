/*
    author    : MishkatIT
    created   : Friday 2023-12-22-20.56.18
*/

#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';

using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
const ll N      = 2e5 + 10;
const ll inf    = 1e9;
const ll linf   = 1e18;

int main()
{
    fio;
    int n, m;
    cin >> n >> m;
    vector<bool> v(110);
    v[0] = true;
    bool ok = true;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        if (!v[x]) ok = false;
        if (ok) {
            for (int j = x; j <= y; j++) {
                v[j] = 1;
            }
        }
    }
    int cnt = 0;
    for (int i = 0; i <= m; i++) {
        cnt += v[i];
    }
    if (cnt == m + 1) {
        cout << "YES" << '\n';
    } else {
        cout << "NO" << '\n';
    }
    return 0;
}


