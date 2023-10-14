/*
    author    : MishkatIT
    created   : Saturday 2023-10-14-18.51.40
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
const ll N      = 150001 + 10;
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
    vector<bool> vis (N, false);
    vis.front() = true;
    for (int i = 0; i < n; i++) {
        if(!vis[v[i] - 1]) {
            vis[v[i] - 1] = true;
        } else  if(!vis[v[i]]) {
            vis[v[i]] = true;
        } else if(!vis[v[i] + 1]) {
            vis[v[i] + 1] = true;
        }
    }
    int ans = 0;
    for (int i = 1; i <= 150001; i++) {
        ans += vis[i];
    }
    cout << ans;
    return 0;
}

