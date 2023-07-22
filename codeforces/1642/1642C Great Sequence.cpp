/*
    author    : MishkatIT
    created   : Saturday 2023-07-22-19.53.19
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
        ll n, x;
        cin >> n >> x;
        map<ll, ll> mp;
        for (int i = 0; i < n; i++) {
            ll temp;
            cin >> temp;
            mp[temp]++;
        }
        ll ans = 0;
        map<ll, ll>::iterator it;
        for (it = mp.begin(); it != mp.end(); it++) {
            if(x == 1) {
                it -> second = (it -> second & 1);
            } else {
                ll zz = it -> first * x;
                auto exist = mp.find(zz);
                if (exist != mp.end()) {
                    ll mn = min(exist->second, it -> second);
                    exist->second -= mn;
                    it->second -= mn;
                }
            }
            ans += it -> second;
        }
        cout << ans << '\n';
    }
    return 0;
}
// finding the elements differently 
