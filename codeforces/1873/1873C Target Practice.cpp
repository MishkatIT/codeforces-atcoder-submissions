/*
    author    : MishkatIT
    created   : Thursday 2023-09-21-20.49.51
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
        char arr[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> arr[i][j];
            }
        }
        int x = 1;
        int ans = 0;
        for (int i = 0; i < n / 2; i++) {
            int cnt = 0;
           for (int j = i; j < (n - i); j++) {
              cnt += (arr[i][j] == 'X');
              cnt += (arr[n - i - 1][j] == 'X');
           }
           for (int j = i + 1; j < (n - i) - 1; j++) {
              cnt += (arr[j][i] == 'X');
              cnt += (arr[j][n - i - 1] == 'X');
           }
          ans += (cnt * (i + 1));
        }
        cout << ans << '\n';
    }
    return 0;
}