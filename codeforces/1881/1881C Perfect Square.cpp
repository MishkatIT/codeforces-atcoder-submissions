/*
    author    : MishkatIT
    created   : Thursday 2023-10-12-22.41.08
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
        char arr[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> arr[i][j];
            }
        }

        int ans = 0;
        for (int i = 0; i < n / 2; i++) {
            for (int j = 0; j < n / 2; j++) {
                char mx = max ({arr[i][j], arr[n - j - 1][i], arr[j][n - i - 1], arr[n - i - 1][n - j - 1] });
                ans += (mx - arr[i][j]);
                ans += (mx - arr[n - j - 1][i]);
                ans += (mx - arr[j][n - i - 1]);
                ans += (mx - arr[n - i - 1][n - j - 1]);
            }
        }

        cout << ans << '\n';
    }
    return 0;
}
