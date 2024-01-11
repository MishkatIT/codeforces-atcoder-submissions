/*
    author    : MishkatIT
    created   : Friday 2024-01-12-01.46.37
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

class DSU
{
public:
    vector<int> parent;
    DSU (int n)
    {
        parent.resize(n);
        iota(parent.begin(), parent.end(), 0);
    };
    int root(int x)
    {
        if (parent[x] == x) return x;
        return parent[x] = root(parent[x]);

    }

    void join(int u, int v)
    {
        int rootU = root(u);
        int rootV = root(v);

        if (rootU != rootV) {
            if (rootU < rootV) {
                swap(rootU, rootV);
            }
            parent[rootV] = parent[rootU];
        }
    }

};

int main()
{
    fio;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        DSU dsu(n + 5);

        vector<int> v(n + 5);
        set<int> s;
        for (int i = 1; i <= n; i++) {
            cin >> v[i];
            auto it = s.lower_bound(v[i]);
//            debug(*it)
            if (*it > v[i]) {
                dsu.join(v[i], *it);
            }
            s.insert(v[i]);
        }
        int mx = v[n];
        for (int i = n; i > 0; i--) {
            if (v[i] > mx) {
                dsu.join(mx, v[i]);
            } else {
                mx = v[i];
            }
        }
        int ans = 0;
        for (int i = 1; i <= n; i++) {
            ans += (dsu.parent[i] == i);
        }
        cout << ans << '\n';
    }
    return 0;
}


