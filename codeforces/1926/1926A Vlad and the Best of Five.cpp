/*
    author    : MishkatIT
    created   : Monday 2024-02-19-20.19.49
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
        int a = 0, b = 0;
        for (int i = 0; i < str.size(); i++) {
            a += (str[i] == 'A');
            b += (str[i] == 'B');
        }
        if (a > b) cout << 'A' << '\n';
        else cout << 'B' << '\n';
    }
    return 0;
}

