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
    int pos = 0;
    while (str[pos] != 'A') pos++;
    int ans = 0;
    for (int i = 1; i < 26; i++) {
        for (int j = 0; j < 26; j++) {
            if (str[j] == char('A' + i)) {
                ans += abs(pos - j);
                pos = j;
                break;
            }
        }
    }
    cout << ans << '\n';
    return 0;
}