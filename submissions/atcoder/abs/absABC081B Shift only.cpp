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
     int arr[n];
     for (int i = 0; i < n; i++) {
        cin >> arr[i];
     }
     int op = 0;
     while (true) {
        bool allEven = true;
        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 == 0) { // If it's not divisible by 2, then it's not even
                arr[i] = arr[i] / 2;
            } else {
                allEven = false;
            }
        }
        if (allEven) {
            op++;
        } else {
            break;
        }
    }
    cout << op << '\n';
    return 0;
}