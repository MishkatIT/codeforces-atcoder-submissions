/*
    author    : MishkatIT
    created   : Wednesday 2023-07-26-17.28.35
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
        ll n;
        cin >> n;
        ll m = n;
        n--;
        vector<ll> v(n);
        ll mx = 0;
        for (auto& i : v) {
            cin >> i;
            mx = max(mx, i);
        }
        ll sum = (m * (m + 1)) / 2;
        if(mx > sum) {
            cout << "NO" << '\n';
            continue;
        }
        if(v.back() != sum) {
            v.push_back(sum);
            set<ll> s;
            s.insert(v.front());
            for (int i = 1; i < m; i++) {
                s.insert(v[i] - v[i - 1]);
//                debug(v[i] - v[i - 1]);
            }
            if(s.size() == m) {
                cout << "YES" << '\n';
            } else {
                cout << "NO" << '\n';
            }
            continue;
        }
        bool ok = true;
        ll x = 0;
        vector<bool> track(2 * N, false);
        for (int i = 1; i < n; i++) {
            ll dif = v[i] - v[i - 1];
            if(!track[dif] && dif <= m) {
                track[dif] = true;
                sum -= dif;
            } else {
                if(!x) {
                    x = dif;
                } else {
                    ok = false;
                }
            }
        }
//        debug(x)
        if(x == 0) {
          x = sum;
        }
        if(v.front() <= m && !track[v.front()]) {
            track[v.front()] = true;
        }
        for (int i = 1; i <= m; i++) {
            if (!track[i]) {
                x -= i;
//                debug(x)
            }
        }
        if(!track[v.front()] && x == v.front()){
          x -= v.front();
        }
//        debug(x)
        if(x != 0) {
            ok = false;
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}
