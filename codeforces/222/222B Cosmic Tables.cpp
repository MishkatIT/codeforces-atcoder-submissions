/*
    author    : MishkatIT
    created   : Friday 2024-01-05-19.58.34
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
    int n, m, k;
    cin >> n >> m >> k;
    int a[n + 5][m + 5];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }
    vector<int> row(n + 5), col(m + 5);
    iota(row.begin(), row.end(), 0);
    iota(col.begin(), col.end(), 0);
    while (k--) {
        char type;
        cin >> type;
        int r, c;
        cin >> r >> c;
        if (type == 'r') {
            swap(row[r], row[c]);
        } else if (type == 'c') {
            swap(col[r], col[c]);
        } else {
            cout << a[row[r]][col[c]] << '\n';
        }
    }
    return 0;
}


