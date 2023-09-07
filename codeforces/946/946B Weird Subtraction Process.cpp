/*
    author    : MishkatIT
    created   : Thursday 2023-09-07-19.49.47
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
ll a, b;
int main()
{
    fio;
    cin >> a >> b;
    int toogle = 0;
    while(true) {
        if(a == 0 || b == 0 || (a < 2 * b && b < 2 * a)) break;
        if(toogle) {
            a %= (2 * b);
        } else {
            b %= (2 * a);
        }
        toogle ^= 1;
    }
    cout << a << ' ' << b;
    return 0;
}

