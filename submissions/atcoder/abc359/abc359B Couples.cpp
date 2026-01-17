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
     n *= 2;
     int arr[n];
     for (int i = 0; i < n; i++) {
        cin >> arr[i];
     }
     int ans = 0;
     for (int i = 0; i + 2 < n; i++) {
        if (arr[i] == arr[i + 2]) {
            ans++;
        }
     }
     cout << ans << '\n';
    return 0;
}