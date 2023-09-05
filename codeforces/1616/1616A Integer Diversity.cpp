/*
    author    : MishkatIT
    created   : Tuesday 2023-09-05-23.32.33
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
        map<int, int> mp;
        int zero = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if(x == 0) {
                zero++;
                continue;
            }
            mp[abs(x)]++;
        }
        int ans = (zero > 0);
        for (auto& i: mp) {
            ans += min(2, (i.second + 2) / 2);
        }
        cout << ans << '\n';
    }
    return 0;
}
