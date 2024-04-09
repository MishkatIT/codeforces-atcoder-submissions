/*
    author    : MishkatIT
    created   : Wednesday 2024-04-10-05.14.30
*/

#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';

using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
const ll N      = 2e5 + 10;
const ll inf    = 1e9;
const ll linf   = 1e18;

int main()
{
    fio;
    int n, d;
    cin >> n >> d;
    vector<int> v(n);
    for (auto& i : v) {
        cin >> i;
    }
    sort(v.begin(), v.end());
    int l = 0, r = n - 1;
    int ans = 0;
    ll cur = 0;
    int x = 0;
    while(l <= r) {
        if (!x) {
            x = v[r--];
            cur = x;
        } else {
            cur += x;
            l++;
        }
        if (cur > d) {
            ans++;
            cur = 0;
            x = 0;
        }
    }
    cout << ans;
    return 0;
}


