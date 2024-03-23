/*
    author    : MishkatIT
    created   : Saturday 2024-03-23-23.22.46
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
    int n, q;
    cin >> n >> q;
    string str;
    cin >> str;
    int ans = 0;
    for (int i = 0; i + 1 < n; i++) {
        if(str[i] == '.' && str[i + 1] == str[i]) {
            ans++;
        }
    }

    while(q--) {
        int x;
        cin >> x;
        --x;
        char c;
        cin >> c;
        if (str[x] == '.' && c != '.') {
            if (x - 1 >= 0) {
                if (str[x - 1] == '.') ans--;
            }
            if (x + 1 < n) {
                if (str[x + 1] == '.') ans--;
            }
            str[x] = c;
        } else if(str[x] != '.' && c == '.') {
            if (x - 1 >= 0) {
                if (str[x - 1] == '.') ans++;
            }
            if (x + 1 < n) {
                if (str[x + 1] == '.') ans++;
            }
            str[x] = c;
        }
        cout << ans << '\n';
    }

    return 0;
}


