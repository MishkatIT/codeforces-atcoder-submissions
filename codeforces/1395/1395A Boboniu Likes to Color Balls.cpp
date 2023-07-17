/*
    author    : MishkatIT
    created   : Monday 2023-07-17-23.21.38
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
    int t;
    cin >> t;
    while(t--) {
        int r, g, b, w;
        cin >> r >> g >> b >> w;
        bool ok = false;
        int odd = 0;
        odd += (r & 1), odd += (g & 1), odd += (b & 1), odd += (w & 1);
        if(odd <= 1) ok = true;
        int mn = r > 0 && g > 0 && b > 0;
        w += mn;
        r -= mn, g -= mn, b -= mn;
        odd = 0;
        odd += (r & 1), odd += (g & 1), odd += (b & 1), odd += (w & 1);
        if(odd <= 1) ok = true;
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}

