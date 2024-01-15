/*
    author    : MishkatIT
    created   : Monday 2024-01-15-20.33.22
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
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        int ans = -1;
        for (int i = 0; i < 3; i++) {
            int x, y;
            cin >> x >> y;
            if (x == a) {
                int temp = abs(b - y);
                if (ans == -1) ans = temp * temp;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}

