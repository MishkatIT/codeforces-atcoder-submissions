/*
    author    : MishkatIT
    created   : Thursday 2023-08-31-12.08.56
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
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            --x;
            v[x] = i;
        }
        int ans = 0;
        for (int i = 0; i + 1 < n; i++) {
            ans += (v[i + 1] < v[i]);
        }
        cout << ans << '\n';
    }
    return 0;
}
