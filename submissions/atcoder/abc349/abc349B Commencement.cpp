/*
    author    : MishkatIT
    created   : Saturday 2024-04-13-18.04.20
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
    string str;
    cin >> str;
    map<char, int> mp;
    for (auto& i : str) {
        mp[i]++;
    }
    map<int, int> x;
    for (auto& i : mp) {
        x[i.second]++;
    }
    bool ok = true;
    for (auto& i : x) {
        ok &= (i.second == 2);
    }
    cout << (ok ? "Yes" : "No") << '\n';
    return 0;
}

