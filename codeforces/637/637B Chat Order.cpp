/*
    author    : MishkatIT
    created   : Tuesday 2023-12-26-18.08.03
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
    vector<string> v(n);
    for (auto& i : v) {
        cin >> i;
    }

    map<string, bool> mp;
    for (int i = n - 1; i >= 0; i--) {
        if (mp.find(v[i]) == mp.end()) {
            mp[v[i]] = true;
            cout << v[i] << '\n';
        }
    }
    return 0;
}


