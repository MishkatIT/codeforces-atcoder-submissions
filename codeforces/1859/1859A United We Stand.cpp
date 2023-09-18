/*
    author    : MishkatIT
    created   : Saturday 2023-08-12-20.38.43
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
        vector<int>v(n);
        vector<int> b, c;
        for (auto& i : v) {
            cin >> i;
        }
        sort(v.rbegin(), v.rend());
        for (int i = 0; i < n; i++) {
            if(c.size() == 0 || c.back() == v[i]) {
                c.push_back(v[i]);
            } else {
                b.push_back(v[i]);
            }
        }
        if(b.size() == 0) {
            cout << -1 << '\n';
        } else {
            cout << b.size() << ' ' << c.size() << '\n';
            for (auto& i: b) {
                cout << i << ' ';
            }
            cout << '\n';
            for (auto& i: c) {
                cout << i << ' ';
            }
            cout << '\n';
        }
    }
    return 0;
}