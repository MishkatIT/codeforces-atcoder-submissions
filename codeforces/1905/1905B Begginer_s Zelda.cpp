/*
    author    : MishkatIT
    created   : Sunday 2023-12-17-13.24.08
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
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        map<int, int> mp;
        for (int i = 1; i < n; i++) {
            int u, v;
            cin >> u >> v;
            mp[u]++, mp[v]++;
        }
        int cnt = 0;
        for (auto& i : mp) {
            cnt += (i.second == 1);
        }
        cout << (cnt + 1) / 2 << '\n';
    }
    return 0;
}


