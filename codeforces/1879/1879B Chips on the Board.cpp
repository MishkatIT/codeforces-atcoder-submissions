/*
    author    : MishkatIT
    created   : Sunday 2023-09-24-20.52.08
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
    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        vector<ll>a(n);
        ll s1, s2;
        s1 = s2 = 0;
        for (auto& x: a) {
            cin >> x;
            s1 += x;
        }
        vector<ll>b(n);
        for (auto& x: b) {
            cin >> x;
            s2 += x;
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        ll ans = min(a.front() * n + s2, b.front() * n + s1);
        cout << ans << '\n';
    }
    return 0;
}