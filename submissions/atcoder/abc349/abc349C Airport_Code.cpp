/*
    author    : MishkatIT
    created   : Saturday 2024-04-13-18.16.17
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
    string s, t;
    cin >> s >> t;
    int n = s.size(), j = 0;
    for (int i = 0; i < n; i++) {
        if (char(s[i] - 'a' + 'A') == t[j]) {
            j++;
        }
        if (j == 3)break;
    }
    if (j == 3 || (j == 2 && t.back() == 'X')) cout << "Yes" << '\n';
    else cout << "No" << '\n';
    return 0;
}

