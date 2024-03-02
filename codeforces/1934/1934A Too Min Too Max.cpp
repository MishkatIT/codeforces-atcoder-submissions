/*
    author    : MishkatIT
    created   : Sunday 2024-03-03-03.29.02
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
        vector<int> v(n);
        for (auto& i : v) {
            cin >> i;
        }
        sort(v.begin(), v.end());
        vector<int> temp(4);
        temp[0] = v[0], temp[1] = v[n - 1], temp[2] = v[1], temp[3] = v[n - 2];
        int ans = 0;
        for (int i = 0; i < 4; i++) {
            ans += abs(temp[i] - temp[(i + 1) % 4]);
        }
        cout << ans << '\n';
    }
    return 0;
}


