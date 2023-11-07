/*
    author    : MishkatIT
    created   : Wednesday 2023-11-08-01.49.02
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
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (auto& i : v) {
        cin >> i;
    }
    int a, b;
    int ans = 0;
    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        --a, --b;
        ans += min(v[a], v[b]);
    }
    cout << ans;
    return 0;
}

