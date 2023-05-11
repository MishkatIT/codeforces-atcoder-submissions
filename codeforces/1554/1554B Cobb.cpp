/*
    author    : MishkatIT
    created   : Thursday 2023-05-11-19.00.09
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll = long long;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll>v(n + 10);
    for (ll i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    ll ans = -1e15;
    for (ll i = n; i > 0; i--)
    {
        for (ll j = i - 1; j > 0; j--)
        {
            if(i * j < ans)
            {
//                cout << ans << '\n';
//                return;
                  break;
            }
            ans = max(ans, i * j - k * (v[i] | v[j]));
        }
    }
    cout << ans << '\n';
    return;
}
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}

