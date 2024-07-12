/*
    Author    : MishkatIT
    Created   : Friday 12-07-2024 16:39:42
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

int mxBit = 40;

struct Node {
    ll sum;
    vector<int> totBit;
    Node() {
        sum = 0;
        totBit.resize(mxBit);
    }
};

vector<Node> Tree;
vector<int> Lazy;

class segmentTree {
public:
    int n;
    segmentTree(vector<int> &v) {
        n = v.size();
        Tree.resize(4 * n, Node());
        Lazy.resize(4 * n, 0);
        build(v, 1, 0, n - 1);
    }

#define lc (node << 1)
#define rc ((node << 1) | 1)

    ll getSum(int node) {
        return Tree[lc].sum + Tree[rc].sum;
    }

    vector<int> getBit(ll x) {
        vector<int> temp(mxBit);
        for (int b = 0; b < mxBit; b++) {
            if ((1LL << b) & x) {
                temp[mxBit - 1 - b] = 1;
            }
        }
        return temp;
    }

    vector<int> mergeBit(int node) {
        vector<int> temp(mxBit);
        for (int i = 0; i < mxBit; i++) {
            temp[i] += Tree[lc].totBit[i] + Tree[rc].totBit[i];
        }
        return temp;
    }

    void build(vector<int> &v, int node, int s, int e) {
        if (s == e) {
            Tree[node].sum = v[s];
            Tree[node].totBit = getBit(v[s]);
            return;
        }
        int mid = (s + e) / 2;
        build(v, lc, s, mid);
        build(v, rc, mid + 1, e);
        Tree[node].sum = getSum(node);
        Tree[node].totBit = mergeBit(node);
    }
    void propagate(int node, int s, int e) {
        if (Lazy[node]) {

            vector<int> temp = getBit(Lazy[node]);

            for (int i = 0; i < mxBit; i++) {
                int cur = mxBit - 1 - i;

                if (temp[cur]) {

                    Tree[node].sum -= Tree[node].totBit[cur] * (1LL << i);
                    Tree[node].totBit[cur] = (e - s + 1) - Tree[node].totBit[cur];
                    Tree[node].sum += Tree[node].totBit[cur] * (1LL << i);
                }
            }

            if (s != e) {
                Lazy[lc] ^= Lazy[node];
                Lazy[rc] ^= Lazy[node];
            }
            Lazy[node] = 0;
        }
    }

    ll range_query(int node, int s, int e, int l, int r) {
        propagate(node, s, e);
        if (s > r || e < l)
            return 0;
        if (l <= s && e <= r) {
            return Tree[node].sum;
        }
        int mid = (s + e) / 2;
        return range_query(lc, s, mid, l, r) + range_query(rc, mid + 1, e, l, r);
    }
    ll query(int l, int r) {
        return range_query(1, 0, n - 1, l - 1, r - 1);
    }

    void range_update(int node, int s, int e, int l, int r, int val) {
        propagate(node, s, e);
        if (s > r || e < l)
            return;
        if (l <= s && e <= r) {
            Lazy[node] = val;
            propagate(node, s, e);
            return;
        }
        int mid = (s + e) / 2;
        range_update(lc, s, mid, l, r, val);
        range_update(rc, mid + 1, e, l, r, val);
        Tree[node].sum = getSum(node);
        Tree[node].totBit = mergeBit(node);
        return;
    }
    void update(int l, int r, int val) {
        range_update(1, 0, n - 1, l - 1, r - 1, val);
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v) {
        cin >> i;
    }
    segmentTree st(v);
    int q;
    cin >> q;
    while (q--) {
        int type, l, r;
        cin >> type >> l >> r;
        if (type == 1) {
            cout << st.query(l, r) << '\n';
        } else {
            int val;
            cin >> val;
            st.update(l, r, val);
        }
    }

    return 0;
}
