/*
    author    : MishkatIT
    created   : Thursday 2023-09-21-20.16.28
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
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        int baseXor = 0;
        for (auto& x: a) {
            cin >> x;
            baseXor ^= x;
        }

        vector<int> b(m);
        for (auto& x: b) {
            cin >> x;
        }
        int mn, mx;
        mn = mx = baseXor;
        if(n & 1) {
            for (auto& i: b) {
                mx |= i;
            }
        } else {
            for (auto& i: b) {
                mn &= ~i;
            }
        }
        cout << mn << ' ' << mx << '\n';
    }
    return 0;
}

