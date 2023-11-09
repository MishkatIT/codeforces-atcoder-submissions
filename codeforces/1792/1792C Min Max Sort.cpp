/*
    author    : MishkatIT
    created   : Thursday 2023-11-09-15.57.13
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
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n + 5), pos(n + 5);
        for (int i = 1; i <= n; i++) {
            cin >> v[i];
            pos[v[i]] = i;
        }
        int ans = 0;
        vector<bool> vis(n + 5);
        int l = 1, r = n;
        int x = 1, y = n;
        int good = 0;
        int xtra = 0;
        while(l <= r) {
            if (v[l] != x || v[r] != y) {
                ans++;
                xtra = good;
            } else {
                good++;
            }
            vis[pos[x]] = true, vis[pos[y]] = true;
            x++, y--;
            while(vis[l]) l++;
            while(vis[r]) r--;
        }
        cout << ans + xtra << '\n';
    }
    return 0;
}

