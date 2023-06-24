/*
    author    : MishkatIT
    created   : Saturday 2023-06-24-19.45.38
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
    int t;
    cin >> t;
    while(t--)
    {
        ll x;
        cin >> x;
        int ans = 0;
        ll base = 1;
        for (ll i = 1; i <= x;)
        {
            ++ans;
            base = base + base + 1;
            i += (base * (base + 1)) / 2;
        }
        cout << ans << '\n';
    }
    return 0;
}

