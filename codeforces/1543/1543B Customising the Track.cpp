/*
    author    : MishkatIT
    created   : Thursday 2023-07-13-18.46.31
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            sum += x;
        }
        int remaining = sum % n;
        cout << (remaining * 1LL * (n - remaining)) << '\n';
    }

    return 0;
}

