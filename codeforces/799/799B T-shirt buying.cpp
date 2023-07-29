/*
    author    : MishkatIT
    created   : Saturday 2023-07-29-12.57.24
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
const ll N      = 1e5 + 10;
const ll inf    = 1e12;
const ll linf   = 1e18;

int main()
{
    fio;
    int n;
    cin >> n;
    vector<ll> p(n + 10);
    for (int i = 1; i <= n; i++) {
        cin >> p[i];
    }
    map<int, priority_queue<ll, vector<ll>, greater<ll>>> mp;// color -> {price, index}
    for (int i = 0; i < 2 * n; i++) {
        int x;
        cin >> x;
        mp[x].push(p[i % n + 1]);
        //        debug(i % n + 1)
    }
    map<ll, bool> taken;
    int m;
    cin >> m;
    while(m--) {
        int c;
        cin >> c;
        ll ans = -1;
        while (!mp[c].empty()) {
            if(!taken[mp[c].top()]) {
                ans = mp[c].top();
                taken[mp[c].top()] = true;
                mp[c].pop();
                break;
            }
            mp[c].pop();
        }
        cout << ans << ' ';
    }
    return 0;
}
