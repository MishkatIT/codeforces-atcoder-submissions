/*
    author    : MishkatIT
    created   : Friday 2024-03-08-15.54.58
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
        int n;
        cin >> n;
        string str;
        cin >> str;
        int len = str.size();
        string a, b;
        for (int i = 0; i < len / 2; i++) {
            a += str[i];
            b += str[len - i - 1];
        }
        bool ok = (a <= b);

        if (ok) {
            cout << str;
        } else {
            reverse(str.begin(), str.end());
            cout << str;
        }
        n--;
        if ((n & 1) && !ok) {
            reverse(str.begin(), str.end());
            cout << str;
        }
        cout << '\n';
    }
    return 0;
}

