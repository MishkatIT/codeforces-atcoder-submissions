/*
    author    : MishkatIT
    created   : Saturday 2024-02-10-17.53.22
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
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        for (int i = a; i <= b; i += c) {
            cout << i << ' ';
        }
    }
    return 0;
}

