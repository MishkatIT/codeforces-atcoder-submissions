/*
    author    : MishkatIT
    created   : Saturday 2024-03-23-23.44.03
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
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string str;
        cin >> str;
        vector<vector<int>> f(2);
        vector<int> ans(n);
        int cur = 1;
        for (int i = 0; i < n; i++) {
            int x = str[i] - '0';
            if (f[!x].empty()) {
                f[x].push_back(cur++);
            } else {
                f[x].push_back(f[!x].back());
                f[!x].pop_back();
            }
            ans[i] = f[x].back();
        }
        cout << cur - 1 << '\n';
        for (int i = 0; i < n; i++) {
            cout << ans[i] << " \n"[i == n - 1];
        }
    }
    return 0;
}


