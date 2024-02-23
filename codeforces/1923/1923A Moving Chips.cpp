/*
    author    : MishkatIT
    created   : Friday 2024-02-23-20.26.55
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
        vector<int> temp = {1, 0, 1};
        int ans = 0;
        while(true) {
            int j = 0;
            bool ok = false;
            for (int i = 0; i < n; i++) {
                if (v[i] == temp[j]) {
                    j++;
                }
                if (j == 3) {
                    ok = true;
                    break;
                }
            }
            if (!ok) break;
            ans++;
            bool one = false;
            for (int i = n - 1; i >= 0; i--) {
                if (v[i] == 1 && !one) {
                    v[i] = 0;
                    one = true;
                } else if (v[i] == 0 && one) {
                    v[i] = 1;
                    break;
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}

