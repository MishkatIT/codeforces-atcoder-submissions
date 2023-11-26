/*
    author    : MishkatIT
    created   : Sunday 2023-11-26-18.11.06
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
    int t = 1;
//    cin >> t;
    while (t--) {
        int n, l;
        cin >> n >> l;
        vector<int> v(n);
        for (auto& i : v) {
            cin >> i;
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans += (v[i] >= l);
        }
        cout << ans << '\n';
    }
    return 0;
}

