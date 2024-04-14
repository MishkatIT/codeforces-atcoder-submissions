/*
    author    : MishkatIT
    created   : Monday 2024-04-15-01.35.35
*/

#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';

using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
const ll N      = 2e5 + 10;
const ll i0nf    = 1e9;
const ll linf   = 1e18;

void print(int n) {
    for (int i = 1; i <= n; i++) {
        cout << i << ' ';
    }
    cout << '\n';
}

int main()
{
    fio;
    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        ll sum = 0;
        for (int i = 1; i <= n; i++) {
            sum += 2 * (i * i) - i;
        }
        cout << sum << ' ' << 2 * n << '\n';
        for (int i = n; i > 0; i--) {
            cout << 1 << ' ' << i << ' ';
            print(n);
            cout << 2 << ' ' << i << ' ';
            print(n);
        }
    }
    return 0;
}


