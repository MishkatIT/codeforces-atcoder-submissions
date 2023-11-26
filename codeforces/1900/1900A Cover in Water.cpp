/*
    author    : MishkatIT
    created   : Sunday 2023-11-26-20.35.10
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
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (str[i] == '.') {
                int cnt = 0;
                while(i < n && str[i] == '.') {
                    cnt++;
                    i++;
                }
                if (cnt > 2) {
                    ans = 2;
                    break;
                } else {
                    ans += cnt;
                }
                i--;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}

