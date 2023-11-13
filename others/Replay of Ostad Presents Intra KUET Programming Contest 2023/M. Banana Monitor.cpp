/*
    author    : MishkatIT
    created   : Tuesday 2023-10-10-22.35.45
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
        int n, mx, a, c;
        cin >> n >> mx >> a >> c;

        vector<int> v(n);
        for (auto& i : v) {
            cin >> i;
        }
        int ans = 0;
        int dec = c, inc = 0;
        for (int i = 0; i < n; i++) {

            if(v[i] <= mx) {
                dec++;
                if(dec >= c) inc = 0;
                if(inc < a) inc = 0;
            } else {
                dec = 0;
                inc++;
            }
            if(inc >= a) {
                ans++;
            }

        }
        cout << ans << '\n';
    }
    return 0;
}