/*
    author    : MishkatIT
    created   : Saturday 2024-02-17-20.39.33
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
        int l = 1, r = n;
        for (int i = 1; i <= n; i++) {
            if (i & 1) cout << l++ << ' ';
            else cout << r-- << ' ';
        }
        cout << '\n';

    }
    return 0;
}

