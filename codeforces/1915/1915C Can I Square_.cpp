/*
    author    : MishkatIT
    created   : Thursday 2023-12-28-20.46.58
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
        vector<ll> v(n);
        ll sum = 0;
        for (auto& i : v) {
            cin >> i;
            sum += i;
        }

        ll sq = sqrtl(sum);
        sq -= 3;
        bool ok = false;
        for (ll i = sq; i <= sq + 6; i++) {
            if (i * i == sum) {
                ok = true;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}

