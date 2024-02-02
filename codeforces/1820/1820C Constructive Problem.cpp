/*
    author    : MishkatIT
    created   : Friday 2024-02-02-14.49.07
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
        int mex = 0;
        vector<int> vv = v;
        sort(vv.begin(), vv.end());
        for (int i = 0; i < n; i++) {
            if (mex == vv[i]) mex++;
        }
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            mp[v[i]]++;
        }
        int l = -1, r = -1;
//        debug(mex)
        for (int i = 0; i < n; i++) {
            if (v[i] == mex + 1) {
                if (l == -1) {
                    l = i, r = i;
                } else {
                    r = i;
                }
            }
        }
        if (l == -1) {
            if (n > mex) {
                cout << "YES" << '\n';
            } else {
                cout << "NO" << '\n';
            }
        } else {
//            debug(l)debug(r)
            for (int i = l; i <= r; i++) {
                mp[v[i]]--;
            }
            set<int> s;
            for (auto& i : mp) {
                if (i.second > 0) {
                    s.insert(i.first);
                }
            }
            int finalMex = 0;
            bool used = false;
            for (auto& i : s) {
                if (i == finalMex) finalMex++;
                else if(!used) {
                    used = true;
                    finalMex++;
                } else break;
            }
            if (!used) {
                finalMex++;
            }
//            debug(finalMex)
            if (finalMex == mex + 1) {
                cout << "YES" << '\n';
            } else {
                cout << "NO" << '\n';
            }
        }
    }
    return 0;
}


