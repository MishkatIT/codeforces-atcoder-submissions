/*
    author    : MishkatIT
    created   : Sunday 2023-09-24-23.46.24
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 998244353;
const ll N      = 1e5 + 10;
const ll inf    = 1e9;
const ll linf   = 1e18;

int main()
{
    fio;
    ll t;
    cin >> t;
    while(t--) {
        string str;
        cin >> str;
        ll seg = 1; // consecutive segments of 0s or 1s.
        ll n = str.length();
        ll len = 1;
        ll op = 0;
        for (ll i = 0; i + 1 < n; i++) {
            if(str[i] != str[i + 1]) {
                seg = (seg % mod * len % mod) % mod;
                op += len - 1;
                len = 1;
            } else {
                len++;
            }
        }
        if(len > 1) {
                seg = (seg % mod * len % mod) % mod;
            op += len - 1;
        }
        if(op == 0) {
            cout << "0 1" << '\n';
            continue;
        }

        for (ll i = 1; i <= op; i++) {
            seg = (seg % mod * i % mod) % mod;
        }
        cout << op << ' ' << seg << '\n';
    }
    return 0;
}
