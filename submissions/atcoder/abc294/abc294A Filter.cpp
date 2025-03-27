/*
    Author    : MishkatIT
*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);

     int n; cin >> n;
     for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        if  (x % 2 == 0) {
            cout << x << ' ';
        }
     }

    return 0;
}