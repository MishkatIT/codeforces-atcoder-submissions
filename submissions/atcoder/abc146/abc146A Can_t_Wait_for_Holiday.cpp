/*
    Author    : MishkatIT
*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    string str;
    cin >> str;
    string arr[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    for (int i = 0; i < 7; i++) {
        if (arr[i] == str) {
            cout << 7 - i << '\n';
            break;
        }
    }
    return 0;
}