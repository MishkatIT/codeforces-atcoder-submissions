/*
    author    : MishkatIT
    created   : Monday 2023-07-10-00.20.20
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
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    int g = __gcd(x, y);
    x /= g, y /= g; // simplified ratio
    int mn = min(a / x, b / y);
    cout << x * mn << ' ' << y * mn;
    return 0;
}
