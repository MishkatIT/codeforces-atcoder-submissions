/*
    author    : MishkatIT
    created   : Wednesday 2023-08-02-00.04.39
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
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if(i == (n + 1) / 2 && j == i) {
                cout << 'X';
                continue;
            }
            if(j == i) {
                cout << '\\';
            } else if((j == (n - i + 1)) || (i == (n - j + 1))) {
                cout << '/';
            } else {
                cout << '*';
            }
        }
        cout << '\n';
    }
    return 0;
}