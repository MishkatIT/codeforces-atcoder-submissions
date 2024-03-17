/*
    author    : MishkatIT
    created   : Sunday 2024-03-17-20.45.48
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
        map<int,int> mp;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            mp[x]++;
        }

        set<int> s;
        int first = -1;
        for (auto& i : mp) {
            if (i.second > 1) {
                s.insert(i.first);
            } else {
                if (first == -1) {
                    s.insert(i.first);
                    first = 1;
                }
            }
        }

        int mex = 0;
        for (auto& i : s) {
            mex += (i == mex);
        }
        cout << mex << '\n';
    }
    return 0;
}

