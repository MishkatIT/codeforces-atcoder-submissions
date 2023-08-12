/*
    author    : MishkatIT
    created   : Sunday 2023-08-13-01.06.50
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
int n;
ll check(vector<int>& temp)
{
    ll mx = 0;
    ll sum = 0;
    ll ans = 0;
    for (int i = 1; i <= n; i++) {
        ll x = 1LL * temp[i] * i;
        sum += x;
        mx = max(mx, x);
    }
    return sum - mx;
}

int main()
{
    fio;
    int t;
    cin >> t;
    while(t--) {
        cin >> n;
        vector<int> v(n + 5);
        iota(v.begin(), v.end(), 0);
        ll ans = 0;
        for (int i = n; i > 0; i--) {
            vector<int> temp = v;
            reverse(temp.begin() + i, temp.begin() + n + 1);
            ans = max(ans, check(temp));
        }
        cout << ans << '\n';
    }
    return 0;
}

