/*
    author    : MishkatIT
    created   : Sunday 2023-10-22-13.05.10
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

ll n, k;

bool ok (ll x)
{
    int sum = 0;
    while(x) {
        sum += (x % 10);
        x /= 10;
    }
    return (sum % k == 0);
}

int main()
{
    fio;
    int t;
    cin >> t;
    while(t--) {
        cin >> n >> k;
        for (ll i = n; ; i++) {
            n += i;
            if(ok(i)) {
                cout << i << '\n';
                break;
            }
        }
    }
    return 0;
}
