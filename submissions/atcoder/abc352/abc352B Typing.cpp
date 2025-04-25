/*
    Author    : MishkatIT
*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    string s, t;
    cin >> s >> t;
    int i = 0, j = 0;
    while (i < s.size() && i < t.size()) {
        if (s[i] == t[j]) {
            i++, j++;
            cout << j << ' ';
        } else {
            j++;
        }
    }
    return 0;   
}