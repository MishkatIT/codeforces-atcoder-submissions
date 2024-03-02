/*
    author    : MishkatIT
    created   : Saturday 2024-03-02-17.57.29
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
    int a, b;
    cin >> a >> b;
    if (a == 0 || b == 0) {
        cout << 9 - max(a, b);
    } else cout << 0;
    return 0;
}

