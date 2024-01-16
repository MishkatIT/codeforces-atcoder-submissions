/*
    author    : MishkatIT
    created   : Tuesday 2024-01-16-19.52.34
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
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        for (auto& i : a) cin >> i;
        vector<int> b(m);
        for (auto& i : b) cin >> i;
        sort(a.begin(), a.end());
        sort(b.rbegin(), b.rend());
        int al = 0, bl = 0, ar = n - 1, br = m - 1;
        ll sum = 0;
        while(al <= ar) {
            int x = abs(a[al] - b[bl]);
            int y = abs(a[ar] - b[br]);
            sum += max(x, y);
            if (x > y) {
                al++;
                bl++;
            } else {
                ar--;
                br--;
            }
        }
        cout << sum << '\n';
    }
    return 0;
}


