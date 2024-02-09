/*
    author    : MishkatIT
    created   : Friday 2024-02-09-16.00.17
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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (auto& i : v) {
            cin >> i;
        }
        map<int, int> mp;
        for (auto& i : v) {
            mp[i]++;
        }
        vector<int> pass;
        for (auto& i : mp) {
            if (i.second >= k) {
                pass.push_back(i.first);
            }
        }
        if (pass.size() == 0) {
            cout << -1 << '\n';
        } else {
            sort(pass.begin(), pass.end());
//            for (auto& i : pass) debug(i)
            int l = pass.front(), r = l;
            int mx = 0;
            int tempL = l, tempR = l;

            for (int i = 0; i + 1 < pass.size(); i++) {
                if (pass[i] + 1 == pass[i + 1]) {
//                    debug(pass[i] + 1)debug(pass[i + 1])
                    tempR++;
                    if (tempR - tempL > mx) {
                        mx = tempR - tempL;
                        l = tempL, r = tempR;
                    }
                } else {
                    tempL = pass[i + 1], tempR = pass[i + 1];
                }
            }
            cout << l << ' ' << r << '\n';
        }
    }
    return 0;
}

