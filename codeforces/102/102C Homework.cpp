/*
    author    : MishkatIT
    created   : Tuesday 2024-04-09-22.24.56
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
    int k;
    cin >> k;
    vector<int> f(26);
    for (auto& i : str) {
        f[i - 'a']++;
    }
    vector<pair<int, int>> mn(26);
    for (int i = 0; i < 26; i++) {
        mn[i] = {f[i], i};
    }
    sort(mn.begin(), mn.end());
    for (int i = 0; i < 26; i++) {
        if (mn[i].first <= k) {
            k -= mn[i].first;
            f[mn[i].second] -= mn[i].first;
        }
    }
    int uni = 0;
    for (auto& i : f) {
        uni += (i > 0);
    }
    cout << uni << '\n';
    for (auto& i : str) {
        if (f[i - 'a']) {
            f[i - 'a'] -= 1;
            cout << i;
        }
    }
    return 0;
}


