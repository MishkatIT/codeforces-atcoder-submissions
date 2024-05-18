/*
    Author    : MishkatIT
    Created   : Saturday 18-05-2024 01:48:25
*/

#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

using ll = long long;
using ld = long double;
const ll mod = 1e9 + 7;
const ll N = 2e5 + 10;
const ll inf = 1e9;
const ll linf = 1e18;

struct idx {
    int matched = 0;
    int l = 0;
    int r = 0;
};

class segmentTree {
    vector<idx> tree;

    #define lc (node << 1)
    #define rc ((node << 1) | 1)

public:
    int n;
    segmentTree(string &str) {
        n = str.size();
        tree.resize(4 * n, idx());
        build(str, 1, 0, n - 1);
    }

    idx merge(idx x, idx y) {
        idx temp;
        int newMatched = min(x.l, y.r);
        temp.matched = x.matched + y.matched + newMatched;
        temp.l = x.l + y.l - newMatched;
        temp.r = x.r + y.r - newMatched;
        return temp;
    }

    void build(string &str, int node, int s, int e) {
        if (s == e) {
            tree[node] = {0, str[s] == '(', str[s] == ')'};
            return;
        }
        int mid = (s + e) / 2;
        build(str, lc, s, mid);
        build(str, rc, mid + 1, e);
        tree[node] = merge(tree[lc], tree[rc]);
    }

    idx range_query(int node, int s, int e, int l, int r) {
        if (e < l || r < s) {
            return {0, 0, 0};
        }
        if (l <= s && e <= r) {
            return tree[node];
        }
        int mid = (s + e) / 2;
        idx left = range_query(lc, s, mid, l, r);
        idx right = range_query(rc, mid + 1, e, l, r);
        return merge(left, right);
    }

    idx query(int l, int r) {
        return range_query(1, 0, n - 1, l - 1, r - 1);
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;
    segmentTree st(str);
    int q;
    cin >> q;
    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << st.query(l, r).matched * 2 << '\n';
    }
    return 0;
}
