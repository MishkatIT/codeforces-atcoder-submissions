/*
    author    : MishkatIT
    created   : Saturday 2023-08-05-20.32.50
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
        int n;
        cin >> n;
        vector<int>v(n);
        int mx = 0;
        for (auto& i : v) {
            cin >> i;
            mx = max(mx, i);
        }
        int ans = 0;
        for (int i = n - 1; i > 0; i--) {
            if(v[i - 1] > v[i]) {
                ans = max(ans, v[i - 1]);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}