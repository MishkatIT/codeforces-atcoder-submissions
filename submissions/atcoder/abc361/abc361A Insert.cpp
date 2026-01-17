/*
    Author    : MishkatIT
*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);

     int n, k, x;
     cin >> n >> k >> x;
     for (int i = 1; i <= n; i++) {
        int val; 
        cin >> val;
        cout << val << ' ';
        if (i == k) {
            cout << x << ' ';
        }
     }

    return 0;
}