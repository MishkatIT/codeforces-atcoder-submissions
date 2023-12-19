/*
    author    : MishkatIT
    created   : Tuesday 2023-12-19-21.09.33
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
    int m;
    cin >> m;
    vector<int> v(30);
    while (m--) {
        int tp, x;
        cin >> tp >> x;
        if (tp == 1) {
            v[x]++;
        } else {
            for (int i = 29; i >= 0; i--) {
                if (v[i] && x) {
                    int divi = x / (1 << i);
                    x -= min(v[i], divi) * (1 << i);
                }
            }
            if (x == 0) {
                cout << "YES" << '\n';
            } else {
                cout << "NO" << '\n';
            }
        }
    }
    return 0;
}


