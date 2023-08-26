/*
    author    : MishkatIT
    created   : Saturday 2023-08-26-22.19.25
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
    ll t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        ll x = 1;
//      debug(x)
        vector<int> ans;
        while(x <= n) {
            ans.push_back(x);
            x <<= 1;
        }
        if(x != n) {
            x >>= 1;
//            debug(x)
            ll temp = n - x;
//            debug(temp)
            ll pw = 1;
            vector<ll> v;
            while(temp) {
                if(temp & 1) {
                    v.push_back(pw);
                }
                temp >>= 1;
                pw <<= 1;
            }
            reverse(v.begin(), v.end());
            for (auto& i: v) {
                x += i;
//                debug(x)
                ans.push_back(x);
            }
        }
        int sz = ans.size();
        cout << sz << '\n';
        for (int i = sz - 1; i >= 0; i--) {
            cout << ans[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}

