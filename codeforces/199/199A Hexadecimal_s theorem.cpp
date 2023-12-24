/*
    author    : MishkatIT
    created   : Monday 2023-12-25-01.31.18
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
    if (n == 0) {
        cout << "0 0 0";
        return 0;
    }
    int a = 0, b = 1;
    while(true) {
        if (a + b == n) {
            cout << 0 << ' ' << a << ' ' << b;
            break;
        }
        b += a;
        a = b - a;
    }
    return 0;
}


