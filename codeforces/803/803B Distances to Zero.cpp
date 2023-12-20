/*
    author    : MishkatIT
    created   : Wednesday 2023-12-20-20.27.35
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
    vector<int> ans(n, inf);
    for (int i = 0; i < n; i++) {
        if (v[i] == 0) {
            ans[i] = 0;
            int l = i - 1;
            while(l >= 0 && v[l] != 0) {
                ans[l] = min(ans[l], i - l);
                l--;
            }
            int r = i + 1;
            while(r < n && v[r] != 0) {
                ans[r] = min(ans[r], r - i);
                r++;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " \n"[i == n - 1];
    }
    return 0;
}


