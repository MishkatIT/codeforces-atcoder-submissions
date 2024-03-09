/*
    author    : MishkatIT
    created   : Sunday 2024-03-10-01.13.02
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
        int n;
        cin >> n;
        ll ans = 1;
        while(n > 0) {
            int cur = n % 10;
            n /= 10;
            int temp = 0;
            for (int i = 0; i <= cur; i++) {
                for (int j = 0; j <= cur; j++) {
                    int k = cur - (i + j);
                    if (k >= 0) {
                        temp++;
                    }
                }
            }
            ans *= temp;
        }
        cout << ans << '\n';
    }
    return 0;
}


