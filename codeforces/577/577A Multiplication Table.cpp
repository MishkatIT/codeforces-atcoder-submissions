/*
    author    : MishkatIT
    created   : Monday 2023-06-12-09.21.53
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
int main()
{
    fio;
    ll n, x;
    cin >> n >> x;
    ll ans = 0;
    for (ll i = 1; i <= n; i++)
    {
        if(x % i == 0 && x <= n * i) ans++;
    }
    cout << ans;
    return 0;
}

