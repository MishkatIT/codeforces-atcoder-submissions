/*
    author    : MishkatIT
    created   : Saturday 2024-01-06-20.56.43
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
        vector<int> a, b;
        for (auto& i : v) {
            if (a.empty()) {
                a.push_back(i);
                continue;
            }
            if (!b.size() && i <= a.back()) {
                a.push_back(i);
                continue;
            }
            if (b.empty()) {
                b.push_back(i);
                continue;
            }
            int difa = a.back() - i;
            int difb = b.back() - i;
//            debug(difa)debug(difb)
            if (difa >= 0 && difb >= 0) {
                if (difa <= difb) {
                    a.push_back(i);
                } else {
                    b.push_back(i);
                }
            } else if(difa >= 0) {
                a.push_back(i);
            } else if (difb >= 0) {
                b.push_back(i);
            } else {
                if (a.back() < b.back()) {
                    a.push_back(i);
                } else {
                    b.push_back(i);
                }
            }
        }
        int ans = 0;
        for (int i = 0; i + 1 < a.size(); i++) {
            ans += (a[i + 1] > a[i]);
        }
        for (int i = 0; i + 1 < b.size(); i++) {
            ans += (b[i + 1] > b[i]);
        }
        cout << ans << '\n';
    }
    return 0;
}

