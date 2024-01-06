/*
    author    : MishkatIT
    created   : Saturday 2024-01-06-16.16.54
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
    int n;
    cin >> n;
    if (n <= 2) {
        cout << "No" << '\n';
        return 0;
    }
    cout << "Yes" << '\n';
    if (n & 1) {
        cout << 1 << ' ' << (n + 1) / 2 << '\n';
        cout << n - 1 << ' ';
        for (int i = 1; i <= n; i++) {
            if (i != (n + 1) / 2) {
                cout << i << ' ';
            }
        }

    } else {
        cout << 2 << ' ' << 1 << ' ' << n << '\n';
        cout << n - 2 << ' ';
        for (int i = 2; i < n; i++) {
            cout << i << ' ';
        }
    }
    return 0;
}

