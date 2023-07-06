/*
    author    : MishkatIT
    created   : Thursday 2023-07-06-22.23.07
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
    int n;
    cin >> n;
    vector<ll>v(n);
    for (auto& i : v) cin >> i;
    ll l = 0, r = n - 1;
    ll suml = 0, sumr = 0;
    ll ans = 0;
    while(l <= r)
    {
        if(suml <= sumr) suml += v[l++];
        else sumr += v[r--];
        if(suml == sumr) ans = sumr;
    }
    cout << ans;
    return 0;
}
