/*
    author    : MishkatIT
    created   : Saturday 2023-12-09-22.16.46
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
        string x;
        cin >> x;
        char c = x[0];
        int n = x[1] - '0';
        for (char i = 'a'; i <= 'h'; i++) {
            if (i != c) {
                cout << i << n << '\n';
            }
        }
        for (int i = 1; i <= 8; i++) {
            if (i != n) {
                cout << c << i << '\n';
            }
        }
    }
    return 0;
}



