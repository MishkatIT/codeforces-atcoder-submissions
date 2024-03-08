/*
    author    : MishkatIT
    created   : Friday 2024-03-08-16.50.02
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
        vector<int> v(n);
        for (auto& i : v) {
            cin >> i;
        }
        vector<int> pref(n), suf(n);
        set<int> s;
        int mex = 0;
        for (int i = 0; i < n; i++) {
            s.insert(v[i]);
            while(s.find(mex) != s.end()) mex++;
            pref[i] = mex;
        }
        s.clear();
        mex = 0;
        for (int i = n - 1; i >= 0; i--) {
            s.insert(v[i]);
            while(s.find(mex) != s.end()) mex++;
            suf[i] = mex;
        }
        int ans = -1;
        for (int i = n - 2; i >= 0; i--) {
            if (pref[i] == suf[i + 1]) {
                ans = i + 1;
                break;
            }
        }
        if (ans == -1) {
            cout << -1 << '\n';
        } else {
            cout << 2 << '\n';
            cout << 1 << ' ' << ans << '\n';
            cout << ans + 1 << ' ' << n << '\n';
        }
    }
    return 0;
}

