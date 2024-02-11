/*
    author    : MishkatIT
    created   : Sunday 2024-02-11-20.35.03
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
        set<int> s;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            s.insert(x);
        }
        vector<int> v(s.begin(), s.end());
        int l = 0, r = l;
        int mx = 0;
        while(r < v.size()) {
            if (v[r] - v[l] < n) {
                r++;
                mx = max(mx, r - l);
            } else {
                l++;
                r = max(l, r);
            }
        }
        cout << mx << '\n';
    }
    return 0;
}

