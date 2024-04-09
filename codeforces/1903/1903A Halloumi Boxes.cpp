/*
    author    : MishkatIT
    created   : Tuesday 2024-04-09-19.41.35
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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (auto& i : v) {
            cin >> i;
        }
        if (k > 1 || is_sorted(v.begin(), v.end())) {
            cout << "YES" << '\n';
        } else {
            sort(v.begin(), v.end());
            if (v.front() == v.back()) {
                cout << "YES" << '\n';
            } else {
                cout << "NO" << '\n';
            }
        }
    }
    return 0;
}


