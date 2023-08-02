/*
    author    : MishkatIT
    created   : Wednesday 2023-08-02-20.25.08
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

bool lucky(ll x)
{
    int four = 0, seven = 0;
    while(x) {
        if(x % 10 == 4) {
            four++;
        } else {
            seven++;
        }
        x /= 10;
    }
    return (four == seven);
}

int main()
{
    fio;
    ll n;
    cin >> n;
    vector<ll> v;
    v.push_back(4);
    v.push_back(7);
    for (int i = 0; true; i++) {
        ll a = (v[i] * 10 + 4);
        ll b = (v[i] * 10 + 7);
        if(a >= n && lucky(a)) {
            cout << a;
            return 0;
        }
        if(b >= n && lucky(b)) {
            cout << b;
            return 0;
        }
        v.push_back(a);
        v.push_back(b);
    }
}
