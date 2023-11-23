/*
    author    : MishkatIT
    created   : Thursday 2023-11-23-18.32.24
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
        map<pair<int, int>, int> mp;
        int d = 0, k = 0;
        for (int i = 0; i < n; i++) {
            if (str[i] == 'D') {
                d++;
            } else {
                k++;
            }
            int g = __gcd(d, k);
            cout << ++mp[ {d / g, k / g}] << ' ';
        }
        cout << '\n';
    }
    return 0;
}


