/*
    Author    : MishkatIT
    Created   : Saturday 24-05-2025 18:46:58
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

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;
    set<string> s;
    int n = str.size();
    char x = 'a' - 1;
    for (int i = 0; i < n; i++) {
        string temp = string(5, x);
        for (int j = 0; j < 5 && i + j < n; j++) {
            temp[j] = str[i + j];
            s.insert(temp);
        }
        
    }
    int k;
    cin >> k;
    for (int i = 1;; i++) {
        if (i == k) {
            string temp = *s.begin();
            while (temp.back() == x) temp.pop_back();
            cout << temp;
            break;
        }
        s.erase(s.begin());
    }
    return 0;
}