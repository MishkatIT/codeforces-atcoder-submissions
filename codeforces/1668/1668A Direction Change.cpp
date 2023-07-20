/*
    author    : MishkatIT
    created   : Thursday 2023-07-20-21.10.47
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
        int a, b;
        cin >> a >> b;
        if(max(a, b) == 1) {
            cout << 0 << '\n';
            continue;
        }
        if(a < b) swap(a, b);
        if(a > 2 && b == 1) {
            cout << -1 << '\n';
            continue;
        }
        int ans = (b * 2) - 1;
//      debug(ans)
        int x = b + 1;
        if(x > a) {
            ans--;
            x = b;
        }
//        debug(ans)
        int rem = a - x;
        ans += rem;
        ans += (rem / 2) * 2 + (rem % 2) * 2;
        cout << ans << '\n';
    }
    return 0;
}
