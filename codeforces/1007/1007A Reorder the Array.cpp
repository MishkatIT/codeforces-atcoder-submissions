/*
    author    : MishkatIT
    created   : Tuesday 2024-01-02-18.05.08
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
    vector<int> v(n);
    for (auto& i : v) {
        cin >> i;
    }
    sort(v.begin(), v.end());
    int ans = 0;
    for (int i = 0, j = 0; i < n; i++, j++) {
        while(v[i] == v[j]) j++;
        if (j >= n) break;
        ans++;
    }
    cout << ans << '\n';
    return 0;
}
