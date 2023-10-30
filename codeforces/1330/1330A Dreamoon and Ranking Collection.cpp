/*
    author    : MishkatIT
    created   : Monday 2023-10-30-23.47.42
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
const ll N      = 1e5 + 10;
const ll inf    = 1e9;
const ll linf   = 1e18;

int main()
{
    fio;
    int t;
    cin >> t;
    while(t--) {
        int n, x;
        cin >> n >> x;
        vector<int> v(269, 1);
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            v[x] = 0;
        }
        int ans = 0;
        for (int i = 1; x > 0 || (v[i] == 0); i++) {
            x -= v[i];
            ans++;
        }
        cout << ans << '\n';
    }
    return 0;
}
