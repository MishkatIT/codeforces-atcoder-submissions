/*
    author    : MishkatIT
    created   : Monday 2024-02-19-21.24.54
*/

#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
#define int long long
using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
const ll N      = 2e5 + 10;
const ll inf    = 1e9;
const ll linf   = 1e18;

int ans[N];

int dig(int x)
{
    int s = 0;
    while(x) {
        s += (x % 10);
        x /= 10;
    }
    return s;
}

void pre()
{
    for (int i = 1; i < N; i++) {
        ans[i] = ans[i - 1] + dig(i);
    }

}

signed main()
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

