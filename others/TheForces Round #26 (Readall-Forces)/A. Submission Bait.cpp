/*
    author    : MishkatIT
    created   : Thursday 2023-11-16-20.38.22
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
        int l, r;
        l = 0, r = n - 1;
        int cnt = 0;
        while(l < r) {
            if (v[l] == v[r]) {
                l++, r--;
                continue;
            }
            if (v[l] > v[r]) {
                v[l] -= v[r];
                r--;
            } else {
                v[r] -= v[l];
                l++;
            }
            cnt++;
        }
        cout << cnt << '\n';
    }
    return 0;
}