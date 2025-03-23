/*
    Author    : MishkatIT
*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int r, g, b;
    cin >> r >> g >> b;
    string str;
    cin >> str;
    if (str[0] == 'R') {
        cout << min(b, g);
    } else if (str[0] == 'G') {
        cout << min(r, b);
    } else {
        cout << min(r, g);
    }
    return 0;
}