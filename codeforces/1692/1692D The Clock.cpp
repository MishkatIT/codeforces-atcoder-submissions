/*
    author    : MishkatIT
    created   : Monday 2024-03-18-04.33.13
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
        int x;
        cin >> x;
        int h = (str[0] - '0') * 10 + str[1] - '0';
        int m = (str[3] - '0') * 10 + str[4] - '0';
        map<string, bool> mp;
        int ans = 0;
        while(!mp[str]) {
            mp[str] = true;
            ans += (str[0] == str[4] && str[1] == str[3]);
            h += (x / 60);
            m += x % 60;
            h %= 24;
            if (m >= 60) {
                h++;
                if (h == 24) h = 0;
                m = m - 60;
            }
            string temp;
            if (h < 10) {
                temp += '0';
                temp += to_string(h);
            } else {
                temp += to_string(h);
            }
            temp += ':';
            if (m < 10) {
                temp += '0';
                temp += to_string(m);
            } else {
                temp += to_string(m);
            }
            str = temp;
        }
        cout << ans << '\n';
    }
    return 0;
}


