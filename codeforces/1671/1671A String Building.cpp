/*
    author    : MishkatIT
    created   : Wednesday 2024-01-10-22.14.37
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
        bool ok = true;
        for (int i = 0; i < str.size();) {
            int j = i;
            while(j < str.size()) {
                if (str[j] == str[i]) j++;
                else break;
            }
            ok &= (j - i > 1);
            i = j;
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}

