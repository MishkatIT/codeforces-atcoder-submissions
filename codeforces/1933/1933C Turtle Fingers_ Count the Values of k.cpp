/*
    author    : MishkatIT
    created   : Sunday 2024-03-24-04.57.48
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
int l;
ll Pow(ll base, ll power)
{
    ll res = 1;
    while(power) {
        if (power & 1) {
            res *= base;
        }
        base *= base;
        if (base > l) break;
        power /= 2;
        if (res > l) return l + 1;
    }
    return res;
}

int main()
{
    fio;
    int t;
    cin >> t;
    while (t--) {
        ll a, b;
        cin >> a >> b >> l;
        set<int> s;
        for (int i = 0; i <= 20; i++) {
            for (int j = 0; j <= 20; j++) {
                ll temp = Pow(a, i);
                if (temp > l) break;
                temp *= Pow(b, j);
                if (temp > l) break;
                if (l % temp == 0) {
                    s.insert(l / temp);
                }
            }
        }
        cout << s.size() << '\n';
    }
    return 0;
}


