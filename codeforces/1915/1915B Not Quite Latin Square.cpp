/*
    author    : MishkatIT
    created   : Thursday 2023-12-28-20.39.16
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
        char arr[3][3];
        int x = 'A' + 'B' + 'C' + '?';
        int ff;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cin >> arr[i][j];
                if (arr[i][j] == '?') {
                    ff = i;
                }
            }
        }
        for (int i = 0; i < 3; i++) {
            x -= arr[ff][i];
        }
        cout << char(x) << '\n';
    }
    return 0;
}

