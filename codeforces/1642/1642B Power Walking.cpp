/*
    author    : MishkatIT
    created   : Friday 2023-07-14-20.51.59
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
        map<int, bool> mp;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            mp[x] = true;
        }
        int sz = mp.size();
        for (int i = 1; i <= sz; i++) {
            cout << sz << ' ';
        }
        for (int i = sz + 1; i <= n; i++) {
            cout << i << ' ';
        }
        cout << '\n';
    }
    return 0;
}
