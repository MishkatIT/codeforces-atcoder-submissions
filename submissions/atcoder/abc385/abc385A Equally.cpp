/*
    Author    : MishkatIT
*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;

    if (a > b) swap(a, b);
    if (a > c) swap(a, c);
    if (b > c) swap(b, c);
    // basically sorting the elements in ascending order... like 1 2 3
    if (a == b && b == c) {
        cout << "Yes" << '\n';
    } else if (a + b == c) {
        cout << "Yes" << '\n';
    } else {
        cout << "No" << '\n';
    }
    return 0;
}
