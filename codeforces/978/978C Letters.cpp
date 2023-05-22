/*
    author    : MishkatIT
    created   : Monday 2023-05-22-23.56.01
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;
int main()
{
    fio;
    ll n, m;
    cin >> n >> m;

    vector<ll>a(n);
    for (auto& x: a)
    {
        cin >> x;
    }

    vector<ll>b(m);
    for (auto& x: b)
    {
        cin >> x;
    }

    ll x = 0, y = 0;
    ll pos = 0;
    for (ll i = 0; i < m; i++)
    {
        while(y < b[i])
        {
            x = y;
            y += a[pos++];
        }
        cout << pos << ' ' << b[i] - x << '\n';
    }
    return 0;
}

