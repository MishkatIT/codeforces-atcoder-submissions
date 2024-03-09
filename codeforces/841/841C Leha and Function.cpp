/*
    author    : MishkatIT
    created   : Saturday 2024-03-09-16.06.45
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
    vector<int> a(n);
    vector<pair<int, int>> b(n);
    for (auto& i : a) cin >> i;
    for (int i = 0; i < n; i++) {
        cin >> b[i].first;
        b[i].second = i;
    }
    sort(b.begin(), b.end());
    sort(a.rbegin(), a.rend());
    vector<int> ans(n);
    for (int i = 0; i < n; i++) {
        ans[b[i].second] = a[i];
    }
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " \n"[i == n - 1];
    }
    return 0;
}


