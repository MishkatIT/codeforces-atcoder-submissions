/*
    Author    : MishkatIT
    Created   : Thursday 10-10-2024 02:51:49
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
const int mod = 1e9 + 7;
const int N = 2e5 + 10;
const int inf = 1e9;
const ll linf = 1e18;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;
    int n = str.size();
    ll sum = 0;
    for (int i = 0; i < (1 << n); i++) { 
        ll temp = 0;
        for (int j = 0; j < n; j++) {
            if (!(i & (1 << j))) { 
                temp *= 10;
                temp += (str[j] - '0');
            } else {
                sum += temp;
                temp = 0;
            }
        }
        sum += temp; 
    }
    cout << sum << '\n';
    return 0;
}
