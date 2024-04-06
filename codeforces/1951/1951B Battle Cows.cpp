/*
    author    : MishkatIT
    created   : Sunday 2024-04-07-03.36.22
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

int myCow, n;

int check (vector<int>& v)
{
    int ans = 0;
    int mx = v[0];
    for (int i = 1; i < n; i++) {
        mx = max(mx, v[i]);
        ans += mx == myCow;
    }
    return ans;
}

int main()
{
    fio;
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> n >> k;
        k--;
        vector<int> v(n);
        for (auto& i : v) {
            cin >> i;
        }
        myCow = v[k];
        swap(v[0], v[k]);
        int ans = check(v);
        swap(v[0], v[k]);
        int pos = 0;
        while(pos < k && v[pos] < myCow) pos++;
        swap(v[pos], v[k]);
        ans = max(ans, check(v));
        cout << ans << '\n';
    }
    return 0;
}


