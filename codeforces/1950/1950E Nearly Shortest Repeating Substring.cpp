/*
    author    : MishkatIT
    created   : Friday 2024-03-29-04.08.21
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
        int ans = n;
        vector<int> divi;
        for (ll i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                divi.push_back(i);
                if (n / i != i) divi.push_back(n / i);
            }
        }
        sort(divi.begin(), divi.end());
        for (auto& i : divi) {
            bool taken = false, ok = true;
            int x = 0;
            for (int j = 0; j < n; j++) {
                if (str[x % i] != str[j]) {
                    if (!taken) taken = true;
                    else {
                        ok = false;
                        break;
                    }
                }
                x++;
            }
            if (ok) {
                ans = min(ans, i);
            }
        }
//        debug(ans)
        for (auto& i : divi) {
            bool taken = false, ok = true;
            int x = n - i;
            for (int j = 0; j < n; j++) {
                if (str[x] != str[j]) {
                    if (!taken) taken = true;
                    else {
                        ok = false;
                        break;
                    }
                }
                x++;
                if (x == n) x = n - i;

            }
            if (ok) {
                ans = min(ans, i);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}

