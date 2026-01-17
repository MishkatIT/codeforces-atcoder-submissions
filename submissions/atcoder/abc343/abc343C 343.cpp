/*
    author    : MishkatIT
    created   : Saturday 2024-03-02-18.08.22
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
    ll n;
    cin >> n;
    ll low = 1, high = 1e6;
    for (ll i = 1e6; i >= 1; i--) {
        if (i * i * i <= n) {
            string temp;
            temp = to_string(i * i * i);
            bool ok = true;
            for (int x = 0; x < temp.size() / 2; x++) {
                if (temp[x] == temp[temp.size() - 1 - x]) continue;
                else {
                    ok = false;
                    break;
                }
            }
            if (ok) {
                cout << i * i * i;
                return 0;
            }
        }
    }
    return 0;
}

