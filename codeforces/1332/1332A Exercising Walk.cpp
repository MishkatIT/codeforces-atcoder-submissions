/*
    author    : MishkatIT
    created   : Wednesday 2023-06-21-20.37.20
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;
const ll N = 1e5 + 10;
const ll inf = 1e9;
const ll linf = 1e18;

bool func(ll dira, ll dirb, ll axisa, ll axisb, ll axis) // directions, axis
{
    ll mn = min(dira, dirb);
    dira -= mn;
    dirb -= mn;
    if(dira > 0)
    {
        if(abs(axisa - axis) < dira) return false;
    }
    else
    {
        if(abs(axisb - axis)  < dirb) return false;
    }
    return true;
}

int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        ll l, r, d, u;
        cin >> l >> r >> d >> u;
        ll x, y, x1, y1, x2, y2;
        cin >> x >> y >> x1 >> y1 >> x2 >> y2;
        ll difx = abs(x1 - x2);
        ll dify = abs(y1 - y2);

        bool ok = true;
        if(l > 0 && r > 0 && difx < 1) ok = false;
        if(d > 0 && u > 0 && dify < 1) ok = false;
        ok &= func(l, r, x1, x2, x);
        ok &= func(d, u, y1, y2, y);
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}

