/*
    Author    : MishkatIT
    Created   : Saturday 27-04-2024 18:08:52
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

    int n;
    cin >> n;
    vector<int> v(n);
    for (auto& i : v) {
        cin >> i;
    }
    vector<int> temp;
    for (int i = 0; i < n; i++) {
        temp.push_back(v[i]);
     
        int len = temp.size();
   
        while (temp.size() > 1 && temp[len - 1] == temp[len - 2]) {
            int x = temp[len - 1] + 1;
            temp.pop_back(); temp.pop_back();
            temp.push_back(x);
            len = temp.size();
        }
    }
    cout << (int)temp.size() << '\n';
    return 0;
}