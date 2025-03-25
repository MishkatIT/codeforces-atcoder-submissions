/*
    Author    : MishkatIT
*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);

     int n;
     cin >> n;
     int last = 0;
     bool ok = true;
     for (int i = 1; i <= n; i++) {
        int cur;
        cin >> cur;
        if (i > 1) {
            if (last >= cur) ok = false;
        }
        last = cur;
     }
     cout << (ok ? "Yes" : "No") << '\n';
    return 0;
}