/*
    author    : MishkatIT
    created   : Saturday 2024-01-06-20.44.41
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
        string str;
        cin >> str;
        ll ans = 0;

        for (auto& i : str) {
            if (i == '-') {
                ans--;
            } else {
                ans++;
            }
        }
        cout << abs(ans) << '\n';
    }
    return 0;
}

