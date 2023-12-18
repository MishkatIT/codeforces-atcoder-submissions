/*
    author    : MishkatIT
    created   : Monday 2023-12-18-20.35.10
*/

#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';

using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
const ll N      = 2e5 + 10;
const ll inf    = 1e9;
const ll linf   = 1e18;

int main()
{
    fio;
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        int n = str.size();
        string a, b;
        int i;
        for (i = 0; i < n / 2; i++) {
            if (i != 0 && str[i] != '0') break;
            a += str[i];
        }
        bool ok = true;
        if (str[i] == '0') ok = false;
        for (; i < n; i++) {
            b += str[i];
        }

        if (stoi(a) >= stoi(b)) ok = false;
        if (!ok) {
            cout << -1 << '\n';
        } else {
            cout << a << ' ' << b << '\n';
        }
    }
    return 0;
}

