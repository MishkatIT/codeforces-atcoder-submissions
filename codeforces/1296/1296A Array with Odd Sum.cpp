/*
    author    : MishkatIT
    created   : Saturday 2024-01-06-17.55.46
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
        int odd = 0;
        for (auto& i : v) {
            odd += (i & 1);
        }
        if (odd == 0 || (odd == n && n % 2 == 0)) {
            cout << "NO" << '\n';
        } else {
            cout << "YES" << '\n';
        }
    }
    return 0;
}


