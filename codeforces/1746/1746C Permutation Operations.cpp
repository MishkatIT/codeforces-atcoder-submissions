/*
    author    : MishkatIT
    created   : Sunday 2024-03-03-16.50.55
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
        vector<pair<int, int>> gap;
        for (int i = 0; i + 1 < n; i++) {
            if (v[i] > v[i + 1]) {
                gap.push_back({v[i] - v[i + 1], i + 2});
            }
        }
        sort(gap.begin(), gap.end());
        int cur = 1;
        for (auto& i : gap) {
            do {
                i.first -= cur;
                cur++;
                cout << i.second << ' ';
            } while(i.first > 0);
        }
        while(cur <= n) {
            cout << 1 << ' ';
            cur++;
        }
        cout << '\n';
    }
    return 0;
}

