/*
    author    : MishkatIT
    created   : Friday 2023-07-14-20.10.07
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
        int n;
        cin >> n;
        map<int, int> mp;
        int mx = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            mp[x]++;
            mx = max(mx, mp[x]);
        }
        int ans = n - mx;
        while(mx < n) {
            ans++;
            mx *= 2;
        }
        cout << ans << '\n';
    }
    return 0;
}

