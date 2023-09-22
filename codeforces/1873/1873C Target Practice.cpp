/*
    author    : MishkatIT
    created   : Friday 2023-09-22-10.18.29
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
        int n = 10;
        int ans = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                char c;
                cin >> c;
                if(c == 'X') {
                    ans += min({i, n - i + 1, j, n - j + 1}); // measuring distance from four directions.
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}

