/*
    author    : MishkatIT
    created   : Tuesday 2024-01-16-20.29.13
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
        vector<int> v(n);
        for (auto& i : v) {
            cin >> i;
        }
        vector<int> divi;
        for (int i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                divi.push_back(i);
                if (n / i != i) {
                    divi.push_back(n / i);
                }
            }
        }
        int ans = 0;
        for (auto& i : divi) {
            int gg = 0;
            for (int j = 0; j < i; j++) {
                int g = 0;
                for (int x = j; x + i < n; x += i) {
                    g = __gcd(g, abs(v[x] - v[x + i]));
                }
                gg = __gcd(gg, g);
            }
            ans += (gg != 1);
        }
        cout << ans << '\n';
    }
    return 0;
}

