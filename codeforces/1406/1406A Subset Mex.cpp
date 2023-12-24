/*
    author    : MishkatIT
    created   : Monday 2023-12-25-02.09.03
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
        vector<bool> f(101);
        set<int> s1, s2;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (f[x]) {
                s2.insert(x);
            } else {
                s1.insert(x);
                f[x] = true;
            }
        }
        int mex1 = 0;
        for (auto& i : s1) {
            if (i == mex1) mex1++;
        }
        int mex2 = 0;
        for (auto& i : s2) {
            if (i == mex2) mex2++;
        }
        cout << mex1 + mex2 << '\n';
    }
    return 0;
}


