/*
    Author    : MishkatIT
*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);

     int h, w;
     cin >> h >> w;
     int arr[h][w];
     for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> arr[i][j];
        }
     }
     for (int j = 0; j < w; j++) {
        for (int i = 0; i < h; i++) {
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
     }
    return 0;
}