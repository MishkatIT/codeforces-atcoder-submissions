/*
    author    : MishkatIT
    created   : Sunday 2023-10-22-17.05.06
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
const ll N      = 1e5 + 10;
const ll inf    = 1e9;
const ll linf   = 1e18;

int main()
{
    fio;
    int t;
    cin >> t;
    while(t--) {
        string str;
        cin >> str;
        map<char, int> mp;
        for (char c = '1'; c <= '9'; c++) {
            mp[c] = (c - '0');
        }
        mp['0'] = 10;
        int ans = 0;
        char cur = '1';
        for (int i = 0; i < 4; i++) {
            ans += abs(mp[cur] - mp[str[i]]);
            cur = str[i];
        }
        cout << ans + 4 << '\n';
    }
    return 0;
}
