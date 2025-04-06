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
     int largest = 0;
     for (int i = 0; i < n; i++) {
        largest = max(largest, arr[i]);
     }
     int secondLargest = 0;
     int index = 0;
     for (int i = 0; i < n; i++) {
        if (arr[i] == largest) continue;
        if (arr[i] > secondLargest) {
            secondLargest = arr[i];
            index = i;
        }
     }
     cout << index + 1 << '\n';
    return 0;
}