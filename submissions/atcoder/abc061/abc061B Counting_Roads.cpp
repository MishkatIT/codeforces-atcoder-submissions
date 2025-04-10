/*
    Author    : MishkatIT
*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    int arr[n + 5];
    for (int i = 1; i <= n; i++) {
        arr[i] = 0;
    }
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        arr[a]++;
        arr[b]++;
    }
    for (int i = 1; i <= n; i++) {
        cout << arr[i] << '\n';
    }
    return 0;
}