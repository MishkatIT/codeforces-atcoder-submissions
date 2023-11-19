/*
    author    : MishkatIT
    created   : Sunday 2023-11-19-20.22.26
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
        int mn = inf;
        int posMin = 0;
        for (int i = 0; i < n; i++) {
            if (v[i] < mn) {
                mn = v[i];
                posMin = i;
            }
        }
        bool sorted = true;
        for (int i = posMin; i + 1 < n; i++) {
            sorted &= (v[i] <= v[i + 1]);
        }
        if (sorted) {
            cout << posMin << '\n';
        } else {
            cout << -1 << '\n';
        }
    }
    return 0;
}


