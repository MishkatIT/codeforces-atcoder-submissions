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
    string name[n];
    int age[n];
    for (int i = 0; i < n; i++) {
        cin >> name[i] >> age[i];
    }

    int minAge = 1e9 + 5;
    int pos = 0;
    for (int i = 0; i < n; i++) {
        if (age[i] < minAge) {
            minAge = age[i];
            pos = i;
        }
    }
    int cnt = 0;
    for (int i = pos; cnt < n; i++) {
        cout << name[i % n] << '\n';
        cnt++;
    }
    return 0;
}