/*
    Author    : MishkatIT
    Created   : Sunday 05-05-2024 20:21:36
*/

#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

using ll = long long;
using ld = long double;
const ll mod = 1e9 + 7;
const ll N = 2e5 + 10;
const ll inf = 1e9;
const ll linf = 1e18;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    string str;
    cin >> str;
    int n = str.size();
    vector<pair<int, int>> pref(n); // prefix balance, pos
    int opening = 0;
    for (int i = 0; i < n; i++) {
        pref[i] = {opening, i};
        if (str[i] =='(') opening++;
        else opening--;
    }
    sort(pref.begin(), pref.end(), [&] (auto& x, auto& y) {
        return (x.first < y.first || (x.first == y.first && x.second > y.second));
    });
    for (auto& i : pref) {
        cout << str[i.second];
    }
    return 0;
}