/*
    author    : MishkatIT
    created   : Sunday 2023-11-26-19.11.23
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
        vector<int> ans;
        while(true) {
            sort(v.begin(), v.end());
            if (v.front() == v.back()) {
                break;
            }
            ans.push_back(v.front());
            for (auto& i : v) {
                i = (i + v.front()) / 2;
            }
        }
         cout << ans.size() << '\n';
        if (ans.size() <= n) {
            for (auto& i : ans) {
                cout << i << ' ';
            }
            cout << '\n';
        }
    }
    return 0;
}


