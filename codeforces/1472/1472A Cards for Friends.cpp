/*
    author    : MishkatIT
    created   : Tuesday 2023-06-20-12.07.46
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

ll cnt;
void func (ll x)
{
    if(x & 1) return;
    cnt += cnt;
    if(cnt >= INT_MAX)
        return;
    func(x >>= 1);
}

int main()
{
    fio;
    ll t;
    cin >> t;
    while(t--)
    {
        cnt = 0, cnt= 1;
        ll w, h, n;
        cin >> w >> h >> n;
        func(w), func(h);
        if(cnt >= n)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}

