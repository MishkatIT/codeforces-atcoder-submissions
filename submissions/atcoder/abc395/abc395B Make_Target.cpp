/*
    Author    : MishkatIT
*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (min({i, j, n - i - 1, n - j - 1}) % 2 == 0) cout << '#';
            else cout << '.';
        }
        cout << '\n';
    }
}
