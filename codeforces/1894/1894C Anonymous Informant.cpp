/*
    author    : MishkatIT
    created   : Wednesday 2023-11-08-20.46.23
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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (auto& i : v) {
            cin >> i;
        }
        k = min(n, k);
        bool ok = true;
        int last = n - 1;
        while(k--) {
            if (v[last] > n) {
                ok = false;
                break;
            }
            last = last - v[last];
            if (last < 0) {
                last += n;
            }
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}

