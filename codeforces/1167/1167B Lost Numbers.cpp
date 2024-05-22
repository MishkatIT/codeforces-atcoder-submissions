/*
    Author    : MishkatIT
    Created   : Thursday 23-05-2024 02:28:21
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
    vector<int> x = {4, 8, 15, 16, 23, 42};
    vector<int> ans;

    auto ask = [&](int i, int j) {
        cout << "? " << i << ' ' << j << endl;
        int resp;
        cin >> resp;
        return resp;
    };

    auto who = [&](int resp) {
        for (int i = 0; i < 6; i++) {
            for (int j = i + 1; j < 6; j++) {
                if (x[i] * x[j] == resp) {
                    return make_pair(x[i], x[j]);
                }
            }
        }
    };

    auto xy = who(ask(1, 2));
    int a = xy.first, b = xy.second;

    xy = who(ask(3, 4));
    int c = xy.first, d = xy.second;

    xy = who(ask(2, 3));
    int bb = xy.first, cc = xy.second;

    if (a == bb || a == cc) {
        swap(a, b);
    }
    ans.push_back(a), ans.push_back(b);

    if (d == bb || d == cc) {
        swap(c, d);
    }
    ans.push_back(c), ans.push_back(d);
    ans.push_back(sqrt(ask(5, 5)));
    int lastOne = 0;
    for (auto& i : x) {
        lastOne ^= i;
    }
    for (auto& i : ans) {
        lastOne ^= i;
    }
    ans.push_back(lastOne);
    cout << "! ";
    for (auto &i : ans) {
        cout << i << ' ';
    }
    cout << endl;
    return 0;
}