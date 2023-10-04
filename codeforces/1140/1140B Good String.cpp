/*
    author    : MishkatIT
    created   : Wednesday 2023-10-04-23.55.39
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
        int n;
        cin >> n;
        string str;
        cin >> str;
        int ans = inf;
        for (int i = 0; i < n; i++) {
            if(str[i] == '>') {
                ans = min(ans, i);
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--) {
            if(str[i] == '<') {
                ans = min(ans, n - i - 1);
                break;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}

