/*
    author    : MishkatIT
    created   : Wednesday 2023-07-26-00.04.40
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
        vector<int>v(n), c(n);
        for (auto& i : v) {
            cin >> i;
        }
        c = v;
        sort(v.begin(), v.end());
        bool ok = true;
        for (int i = 0; i < n; i++) {
            if(v[i] % 2 != c[i] % 2) {
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}

