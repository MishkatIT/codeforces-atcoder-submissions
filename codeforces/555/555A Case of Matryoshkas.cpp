/*
    author    : MishkatIT
    created   : Friday 2024-03-08-15.40.33
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
    int n, k;
    cin >> n >> k;
    int ans = 2 * n - (k - 1);
    while(k--) {
        int m;
        cin >> m;
        for (int i = 1; i <= m; i++) {
            int x;
            cin >> x;
            if (x == 1) {
                ans -= 2;
                while(++i <= m) {
                    cin >> x;
                    if (x == i) {
                        ans -= 2;
                    } else {
                        break;
                    }
                }
            }
        }
    }
    cout << ans << '\n';

    return 0;
}


