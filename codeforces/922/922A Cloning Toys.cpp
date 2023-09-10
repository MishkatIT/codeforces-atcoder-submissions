/*
    author    : MishkatIT
    created   : Sunday 2023-09-10-23.23.19
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
    int x, y;
    cin >> x >> y;
    bool ok = true;
    if(y == 0) ok = false;
    if(x < y - 1) ok = false;
    else if((x - (y - 1)) % 2 != 0) ok = false;
    if(y == 1 && x > 0) ok = false;
    cout << (ok ? "Yes" : "No") << '\n';
    return 0;
}

