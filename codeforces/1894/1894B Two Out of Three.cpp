/*
    author    : MishkatIT
    created   : Wednesday 2023-11-08-13.32.18
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
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        map<int, int> mp;
        vector<int> v(n);
        vector<pair<int, int>> two;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            mp[v[i]]++;
            if(mp[v[i]] == 2) {
                if (two.size() < 2) {
                    two.push_back({v[i], 2});
                }
            }
        }
        vector<int> ans(n, 1);
        if(two.size() == 2) {
            for (int i = 0; i < n; i++) {
                if (v[i] == two[0].first) {
                    if(two[0].second == 1) {
                        ans[i] = 2;
                    }
                    two[0].second--;
                } else if (v[i] == two[1].first) {
                    if(two[1].second == 1) {
                        ans[i] = 3;
                    }
                    two[1].second--;
                }
            }
            for (int i = 0; i < n; i++) {
                cout << ans[i] << " \n"[i == n - 1];
            }
        } else {
            cout << -1 << '\n';
        }

    }
    return 0;
}

