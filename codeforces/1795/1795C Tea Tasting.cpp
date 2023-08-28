/*
    author    : MishkatIT
    created   : Monday 2023-02-27-22.03.00
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll = long long;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        vector<ll> a(n), b(n);
        for (auto& x : a) {
            cin >> x;
        }
        for (auto& x : b) {
            cin >> x;
        }
        vector<ll> pref(n + 10);
        for (int i = 1; i <= n; i++) {
            pref[i] = pref[i - 1] + b[i - 1];
        }
        vector<ll> rem(n + 10), range(n + 10);
        for (int i = 0; i < n; i++) {
            ll cur = a[i] + pref[i];
            int x = upper_bound(pref.begin() + 1, pref.begin() + n + 1, cur) - pref.begin();
//          debug(x)
            range[x]--;
            range[i + 1]++;
            rem[x] += cur - pref[x - 1];
        }

        for (int i = 1; i <= n; i++) {
            range[i] += range[i - 1];
        }
//        for (int i = 1; i <= n; i++) {
//            debug(range[i])
//            debug(rem[i])
//        }
        for (int i = 0; i < n; i++) {
            cout << (b[i] * range[i + 1]) + rem[i + 1] << ' ';
        }
        cout << '\n';
    }
    return 0;
}
