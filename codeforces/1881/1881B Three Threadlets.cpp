/*
    author    : MishkatIT
    created   : Thursday 2023-10-12-20.51.40
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
        multiset<ll> s;
        for (int i = 0; i < 3; i++) {
            ll x;
            cin >> x;
            s.insert(x);
        }
        int cnt = 3;
        while(cnt--) {
            bool ok = true;
            for (auto & i: s) {
                ok &= (i == *s.begin());
            }
            if(ok) {
                break;
            }
            ll x = *s.begin();
            ll xx = *s.rbegin();
            auto it = s.end();
            --it;
            s.erase(it);
            s.insert(xx - x);
            s.insert(x);
        }


        bool ok = true;
        for (auto & i: s) {
            ok &= (i == *s.begin());
        }

        if(ok) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
    return 0;
}
