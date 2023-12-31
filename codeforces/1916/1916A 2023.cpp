/*
    author    : MishkatIT
    created   : Sunday 2023-12-31-18.15.57
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
    vector<int> divi(2023 + 5);
    for (int i = 1; i * i <= 2023; i++) {
        if (2023 % i == 0) {
            divi[i]++;
            divi[2023 / i]++;
        }
    }
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (auto& i : v) {
            cin >> i;
        }
        int x = 2023;
        bool ok = true;
        for (auto& i : v) {
            if (divi[i] && x % i == 0) {
                x /= i;
            } else {
                ok = false;
            }
        }
        if (!ok) {
            cout << "NO" << '\n';
            continue;
        }
        cout << "YES" << '\n';
        cout << x << ' ';
        k--;
        while(k) {
            k--;
            cout << "1 ";
        }
        cout << '\n';
    }
    return 0;
}


