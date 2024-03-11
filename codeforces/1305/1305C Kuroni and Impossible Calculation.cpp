/*
    author    : MishkatIT
    created   : Monday 2024-03-11-22.52.51
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
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (auto& i : v) {
        cin >> i;
    }
    if (n > m) {    // pigeonhole principle?
        cout << 0;
        return 0;
    }
    int ans = 1;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            ans = (1LL * ans * abs(v[i] - v[j])) % m;
        }
    }
    cout << ans;
    return 0;
}

