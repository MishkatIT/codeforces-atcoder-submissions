/*
    author    : MishkatIT
    created   : Tuesday 2024-02-06-21.13.16
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
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> a(n);
        for (auto& i : a) {
            cin >> i;
        }
        vector<int> b(m);
        for (auto& i : b) {
            cin >> i;
        }
        map<int, int> ma, mb;
        for (auto& i : a) {
            ma[i]++;
        }
        for (auto& i : b) {
            mb[i]++;
        }
        int rema = k / 2, remb = k / 2;
        vector<int> ans(k + 5, false);
        for (int i = 1; i <= k; i++) {
            if (ma[i] > 0 && mb[i] > 0) continue;
            if(ma[i] > 0) {
                if (rema && !ans[i]) {
                    rema--;
                    ans[i] = true;
                }
            }
            if(mb[i] > 0) {
                if (remb && !ans[i]) {
                    remb--;
                    ans[i] = true;
                }
            }
        }

        for (int i = 1; i <= k; i++) {
            if(!ans[i]) {
                if (ma[i] > 0 && mb[i] > 0) {
                    if (rema > remb) {
                        if (rema) {
                            rema--;
                            ans[i] = true;
                        }
                    } else {
                        if (remb) {
                            remb--;
                            ans[i] = true;
                        }
                    }
                }
            }
        }
        bool ok = true;
        for (int i = 1; i <= k; i++) {
            ok &= (ans[i]);
        }
        cout << (ok ? "YES" : "NO") << '\n';


    }
    return 0;
}

