
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

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
        for (auto& i : v) cin >> i;
        vector<int> nxt(n);
        nxt[0] = 0;
        for (int i = 1; i < n; i++) {
            if (v[i] == v[i - 1]) {
                nxt[i] = nxt[i - 1];
            } else {
                nxt[i] = i;
            }
        }

        int q;
        cin >> q;
        while(q--) {
            int l, r;
            cin >> l >> r;
            l--, r--;
            if (nxt[r] == nxt[l]) {
                cout << "-1 -1" << '\n';
            } else {
                cout << l + 1 << ' ' << upper_bound(nxt.begin(), nxt.end(), nxt[l]) - nxt.begin() + 1 << '\n';
            }
        }
        cout << '\n';
    }
    return 0;
}
