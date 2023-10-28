/*
    author    : MishkatIT
    created   : Sunday 2023-10-29-00.00.25
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
const ll N      = 1e5 + 10;
const ll inf    = 1e9;
const ll linf   = 1e18;

int main()
{
    fio;
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;
        bool ok = true;
        bool usedB = false;
        for (int i = 0; i + 1 < n; i++) {
            if(a[i] == a[i + 1]) {
                usedB = true;
                if(a[i] == b.front() || a[i + 1] == b.back()) {
                    ok = false;
                }
            }
        }
        if(usedB) {
            for (int i = 0; i + 1 < m; i++) {
                ok &= (b[i] != b[i + 1]);
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}
