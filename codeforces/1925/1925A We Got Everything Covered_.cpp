/*
    author    : MishkatIT
    created   : Saturday 2024-01-27-20.33.55
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
        int n, k;
        cin  >> n >> k;

        for (int i = 0; i < n; i++) {
            for (char c = 'a'; c < char (k + 'a'); c++) {
                cout << c;
            }
        }
        cout << '\n';
    }
    return 0;
}

