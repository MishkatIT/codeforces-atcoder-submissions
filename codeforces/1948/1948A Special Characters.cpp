/*
    author    : MishkatIT
    created   : Saturday 2024-03-16-18.52.55
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
        if (n & 1) {
            cout << "NO" << '\n';
            continue;
        }
        int cnt = 0;
        cout << "YES" << '\n';
        for (int i = 0; i < n; i += 2) {
            cout << char(cnt + 'A');
            cout << char(cnt + 'A');
            cnt++;
            cnt %= 26;
        }
        cout << '\n';
    }
    return 0;
}

