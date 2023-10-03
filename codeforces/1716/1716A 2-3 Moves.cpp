/*
    author    : MishkatIT
    created   : Tuesday 2023-10-03-13.48.53
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
        int n;
        cin >> n;
        if(n % 3 == 0) {
            cout << n / 3 << '\n';
            continue;
        }
        int ans = n / 3;
        if((n - ans * 3) == 2) {
            cout << ans + 1 << '\n';
            continue;
        }
        ans -= (ans > 0);
        ans += 2;
        cout << ans << '\n';
    }
    return 0;
}
