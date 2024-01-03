/*
    author    : MishkatIT
    created   : Wednesday 2024-01-03-19.49.02
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
    int n, m;
    cin >> n >> m;
    vector<int> stackL, stackR;
    for (int i = 1; i <= m / 2; i++) {
        stackL.push_back(i);
    }
    for (int i = m / 2 + 1; i <= m; i++) {
        stackR.push_back(i);
    }

    int l = stackL.size() - 1;
    int r = 0;
    int toggle = (m & 1);
    while(n--) {
        if (toggle) {
            cout << stackR[r++] << '\n';
        } else {
            cout << stackL[l--] << '\n';
        }

        toggle ^= 1;

        if (l <= 0 && r >= stackR.size()) {
            l = stackL.size() - 1;
            r = 0;
            toggle = (m & 1);
        }
    }
    return 0;
}


