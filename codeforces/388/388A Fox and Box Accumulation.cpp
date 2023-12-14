/*
    author    : MishkatIT
    created   : Thursday 2023-12-14-19.44.12
*/

#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';

using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
const ll N      = 105;
const ll inf    = 1e9;
const ll linf   = 1e18;

int main()
{
    fio;
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto& i : v) {
        cin >> i;
    }
    sort(v.begin(), v.end());

    int tot = 0;
    int ans = 0;
    int cnt = 0;
    for (int i = 0; ; i++) {
        i %= n;
        if (i == 0) {
            ans++;
            tot = 0;

        }
        if (v[i] >= 0 ) {
            for (int x = i; x < n; x++) {
                if (tot <= v[x]) {
                    tot++;
                    v[x] = -10;
                    cnt++;
                    break;
                }
            }
        }
        if (cnt == n) break;
    }
    cout << ans;
    return 0;
}


