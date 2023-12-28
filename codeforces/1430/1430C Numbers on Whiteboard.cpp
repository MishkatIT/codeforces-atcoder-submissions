/*
    author    : MishkatIT
    created   : Thursday 2023-12-28-18.20.19
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
        cout << 2 << '\n';
        vector<int> v (n);
        iota(v.begin(), v.end(), 1);
        int sz = v.size();
        while(sz > 1) {
            cout << v[sz - 1] << ' ' << v[sz - 2] << '\n';
            int x = (v[sz - 1] + v[sz - 2] + 1) / 2;
            v.pop_back();
            v.pop_back();
            v.push_back(x);
            sz = v.size();
        }
    }
    return 0;
}


