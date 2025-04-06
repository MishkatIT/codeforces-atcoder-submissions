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
     int arr[n][n];
     for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
     }
     for (int i = 0; i < n; i++) {
        bool printed = false;
        for (int j = 0; j < n; j++) {
            if (arr[i][j]) {
                printed = true;
                cout << j + 1 << ' ';
            }
        }
        if (printed) cout << '\n';
     }
    return 0;
}