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
    int ans = 0;
    int cnt = 0;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == 'R') cnt++;
        else cnt = 0;
        ans = max(ans, cnt);
    }
    cout << ans << '\n';
    return 0;
}