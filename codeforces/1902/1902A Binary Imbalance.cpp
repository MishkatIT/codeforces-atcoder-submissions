/*
    author    : MishkatIT
    created   : Tuesday 2023-12-12-22.55.17
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
        int zero = count(str.begin(), str.end(), '0');
        if (zero > n - zero) {
            cout << "YES" << '\n';
            continue;
        }
        bool ok = false;
        for (int i = 0; i + 1 < n; i++) {
            if (str[i] != str[i + 1]) {
                ok = true;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}


