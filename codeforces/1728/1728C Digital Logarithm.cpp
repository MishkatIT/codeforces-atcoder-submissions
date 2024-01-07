/*
    author    : MishkatIT
    created   : Saturday 2024-01-06-02.18.22
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
        map<int, int> a, b;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            a[x]++;
        }
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (a[x] > 0) {
                a[x]--;
            } else {
                b[x]++;
            }
        }


        ll ans = 0;
        for (auto& i : a) {
            if (i.second > 0) {
                if (i.first > 9) {
                    ans += i.second;
                    a[to_string(i.first).size()] += i.second;
                    i.second = 0;
                }
            }
        }
        for (auto& i : b) {
            if (i.second > 0) {
                if (i.first > 9) {
                    ans += i.second;
                    b[to_string(i.first).size()] += i.second;
                    i.second = 0;
                }
            }
        }
        for (auto& i : a) {
            i.second = abs(b[i.first] - i.second);
            b[i.first] = 0;
        }
        ll cnt = 0;
        ll one = 0;


        for (auto& i : a) {
            if (i.second > 0) {
                if (i.first == 1) one += i.second;
                cnt += i.second;
            }
        }
        for (auto& i : b) {
            if (i.second > 0) {
                if (i.first == 1) one += i.second;
                cnt += i.second;
            }
        }

        ans += cnt - one;
        cout << ans << '\n';
    }
    return 0;
}


