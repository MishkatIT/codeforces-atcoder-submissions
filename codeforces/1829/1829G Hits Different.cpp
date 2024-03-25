/*
    author    : MishkatIT
    created   : Tuesday 2024-03-26-01.06.16
*/

#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';

using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
const ll inf    = 1e9;
const ll linf   = 1e18;

const ll N      = 1420;
ll pref[N][N];
ll ans[(int)1e6 + 10];

void pre()
{
    int x = 0;
    int r = 1;
    int st = 1;
    for (int i = 1; st <= 1e6; i++) {
        int inc = i + 1;
        st += x;
        x++;
        ll cur = st;
        for (int j = 1; cur <= 1e6; j++) {
            pref[i][j] = pref[i - 1][j] + pref[i][j - 1] + cur * cur -  pref[i - 1][j - 1];
            ans[cur] = pref[i][j];
            cur += inc;
            inc++;
        }
    }

}

int main()
{
    fio;
    pre();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << ans[n] << '\n';
    }
    return 0;
}


