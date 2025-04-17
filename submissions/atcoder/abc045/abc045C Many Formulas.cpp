/*
    Author    : MishkatIT
*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    string str;
    cin >> str;

    int n = str.size();
    ll ans = 0;
    for (int i = 0; i < (1 << n); i++) {
        ll temp = 0;
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                temp *= 10;
                temp += str[j] - '0';
            } else {
                ans += temp;
                temp = 0;
            }
        }
        ans += temp;
    }
    cout << ans << '\n';
    return 0;
}