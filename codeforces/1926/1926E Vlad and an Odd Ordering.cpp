/*
    author    : MishkatIT
    created   : Thursday 2024-02-22-03.16.16
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
        ll n, k;
        cin >> n >> k;
        int p = 0;
        int nn = n;
        while(k > (nn + 1) / 2) {
            k -= (nn + 1) / 2;
            nn /= 2;
            p++;
        }
        int a = 1 << p;
        int d = 1 << (p + 1);
        cout << a + (k - 1) * d << '\n';
    }
    return 0;
}


