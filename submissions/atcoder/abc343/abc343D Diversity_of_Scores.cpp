/*
    author    : MishkatIT
    created   : Saturday 2024-03-02-18.30.01
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
    int n, t;
    cin >> n >> t;
    vector<ll> p(n + 5, 0);
    map<ll, ll> mp;
    set<int> s;
    while(t--) {
        int x, y;
        cin >> x >> y;
        s.insert(x);
        if (!p[x]) {
            p[x] = y;
            mp[p[x]]++;
        } else {
            mp[p[x]]--;
            if (mp[p[x]] == 0) {
                mp.erase(p[x]);
            }
            p[x] += y;
            mp[p[x]]++;
        }
        cout << (int) mp.size() + (s.size() != n) << '\n';
    }
    return 0;
}

