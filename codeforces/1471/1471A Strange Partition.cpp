/*
    author    : MishkatIT
    created   : Wednesday 2024-04-10-03.38.44
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
        ll sum = accumulate(v.begin(), v.end(), 0LL);
        cout << (sum + k - 1) / k << ' ';
        ll mx = 0;
        for (int i = 0; i < n; i++) {
            mx += (v[i] + k - 1) / k;
        }
        cout << mx << '\n';
    }
    return 0;
}


