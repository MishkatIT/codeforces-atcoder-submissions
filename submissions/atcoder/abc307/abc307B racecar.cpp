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
    string str[n];
    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }
    bool ok = false;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            string temp = str[i] + str[j];
            bool palindrome = true;
            int len = temp.size();
            for (int k = 0; k < len / 2; k++) {
                if (temp[k] != temp[len - k - 1]) {
                    palindrome = false;
                    break;
                }
            }
            if (palindrome) {
                ok = true;
            }
        }
    }
    cout << (ok ? "Yes" : "No") << '\n';
    return 0;
}