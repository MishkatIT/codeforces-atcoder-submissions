/*
    Author    : MishkatIT
*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n = 64;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    unsigned long long ans = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            ans += (1ull << i); // use this to get the power while base is 2 only.
        }
    }
    cout << ans;
    return 0;
}