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
        vector<int> f(n);
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            f[x]++;
        }
        int mex = 0;
        bool taken = false;
        for (int i = 0; i < n; i++) {
            if ((f[i] == 1 && taken) || f[i] == 0) break;
            else mex++;
            if (f[i] == 1) taken = true;
        }
        cout << mex << '\n';
    }
    return 0;
}
