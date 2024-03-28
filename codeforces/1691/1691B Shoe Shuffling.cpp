/*
    author    : MishkatIT
    created   : Thursday 2024-03-28-23.56.50
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
        vector<int> v(n);
        for (auto& i : v) {
            cin >> i;
        }
        map<int, int> mp;
        for (auto& i : v) {
            mp[i]++;
        }
        bool ok = true;
        for (auto& i : mp) {
            ok &= (i.second != 1);
        }
        if (!ok) {
            cout << -1 << '\n';
        } else {
            vector<int> ans;
            for (int i = 0; i < n; i++) {
                int j = i;
                while(j + 1 < n && v[j + 1] == v[i]) {
                    j++;
                }
                ans.push_back(j + 1);
                while(i < j) {
                    ans.push_back(++i);
                }
            }
            for (int i = 0; i < n; i++) {
                cout << ans[i] << " \n"[i == n - 1];
            }
        }
    }
    return 0;
}
