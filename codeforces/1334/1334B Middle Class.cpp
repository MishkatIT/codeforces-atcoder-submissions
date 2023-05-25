/*
    author    : MishkatIT
    created   : Thursday 2023-05-25-16.43.19
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
int32_t main()
{
    fio;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, x;
        cin >> n >> x;
        vector<ll>v(n);
        ll sum = 0;
        for (auto& i : v)
        {
            cin >> i;
            sum += i;
        }
        sort(v.begin(), v.end());
        ll ans = n;
        for (ll i = 0; i < n; i++)
        {
            if((sum / (n - i)) < x)
            {
                ans--;
                sum -= v[i];
            }
            else
                break;
        }
        cout << ans << '\n';
    }
    return 0;
}

