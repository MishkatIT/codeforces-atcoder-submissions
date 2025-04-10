/*
    Author    : MishkatIT
*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int r, c;
    cin >> r >> c;
    int distance = min({r, 15 - r + 1, c, 15 - c + 1});
    if (distance % 2 == 1) {
        cout << "black" << '\n';
    } else {
        cout << "white" << '\n';
    }
    return 0;
}