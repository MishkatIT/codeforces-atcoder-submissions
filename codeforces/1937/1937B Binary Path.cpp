/*
    author    : MishkatIT
    created   : Thursday 2024-02-29-20.52.09
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
        char arr[2][n];
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < n; j++) {
                cin >> arr[i][j];
            }
        }
        string ans;
        ans += arr[0][0];
        for (int i = 1; i < n; i++) {
            if (arr[0][i] == '0' || arr[1][i - 1] == '1') {
                ans += arr[0][i];
            } else {
                while(i < n) {
                    ans += arr[1][i - 1];
                    i++;
                }
            }
        }
        ans += arr[1][n - 1];

        vector<int> ok(n + 5, false);
        for (int i = n - 1; i >= 0; i--) {
            if (ans[i + 1] == arr[1][i]) {
                ok[i] = true;
            } else break;
        }

        ll cnt = 0;
        for (int i = 0; i < n; i++) {
            if (arr[0][i] == ans[i]) {
                cnt += ok[i];
            } else break;
        }
        cout << ans << '\n';
        cout << cnt << '\n';
    }
    return 0;
}

