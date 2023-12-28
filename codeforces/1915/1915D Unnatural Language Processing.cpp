/*
    author    : MishkatIT
    created   : Thursday 2023-12-28-20.53.43
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
        vector<bool> p(n + 10, false);
        for (int i = n - 1; i >= 0; i--) {
            if (str[i] == 'a' || str[i] == 'e') {
                i--;
                p[i] = true;
            } else {
                i -= 2;
                p[i] = true;
            }
        }
        for (int i = 0; i < n; i++) {
            if (i != 0 && p[i]) {
                cout << '.';
            }
            cout << str[i];
        }
        cout << '\n';
    }
    return 0;
}

