/*
    author    : MishkatIT
    created   : Tuesday 2023-12-26-19.15.17
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
    int n;
    cin >> n;
    vector<ll> v(n);
    for (auto& i : v) {
        cin >> i;
    }
    vector<ll> psum(n + 5);
    for (int i = 1; i <= n; i++) {
        psum[i] = psum[i - 1] + v[i - 1];
    }
    int cnt = 0;
    for (int i = 1; i < n; i++) {
        cnt += (psum[i] == psum[n] - psum[i]);
    }
    cout << cnt << '\n';
    return 0;
}


