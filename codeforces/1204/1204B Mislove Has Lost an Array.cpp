/*
    author    : MishkatIT
    created   : Sunday 2023-10-15-20.52.38
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
    int n, l, r;
    cin >> n >> l >> r;

    ll mnSum = 0, mxSum = 0;

    ll x = 1;
    for (int i = 0; i < l; i++) {
        mnSum += x;
        x += x;
    }
    mnSum += (n - l);

    x = 1;
    for (int i = 0; i < r; i++) {
        mxSum += x;
        x += x;
    }
    x /= 2;
    mxSum += (n - r) * x;

    cout << mnSum << ' ' << mxSum;
    return 0;
}

