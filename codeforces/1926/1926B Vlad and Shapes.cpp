/*
    author    : MishkatIT
    created   : Monday 2024-02-19-20.44.59
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

void solve()
{
    int n;
    cin >> n;
    char arr[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    int a = 0, b = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] == '1') {
                int l = j;
                while(l < n && arr[i][l] == '1')l++, a++;
                l = j;
                if (i + 1 < n)
                    while(l < n && arr[i + 1][l] == '1')l++, b++;
                cout << (a == b ? "SQUARE" : "TRIANGLE") << '\n';
                return;
            }
        }
    }


    return;
}


int main()
{
    fio;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

