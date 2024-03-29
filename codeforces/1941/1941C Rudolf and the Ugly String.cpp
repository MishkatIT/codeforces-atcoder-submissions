/*
    author    : MishkatIT
    created   : Tuesday 2024-03-12-19.03.02
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
            if (str[i] == 'p') {
                if (i - 2 >= 0 && str[i - 2] == 'm' && str[i - 1] == 'a') {
                    ans += 1;
                } else if(i + 2 < n && str[i + 1] == 'i' && str[i + 2] == 'e') {
                    ans += 1;
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
