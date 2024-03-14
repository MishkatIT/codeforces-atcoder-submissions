/*
    author    : MishkatIT
    created   : Friday 2024-03-15-00.13.33
*/

#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
#define int long long
using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
const ll N      = 2e5 + 10;
const ll inf    = 1e9;
const ll linf   = 1e18;

vector<int> tree, lazy;

class segmentTree
{
public:
    int n;
    segmentTree(vector<int>& v)
    {
        n = v.size();
        tree.resize(4 * n);
        lazy.resize(4 * n);
        build(v, 1, 0, n - 1);
    }

    void build(vector<int>& v, int node, int s, int e)
    {
        if (s == e) {
            tree[node] = v[s];
            return;
        }
        int mid = (s + e) / 2;
        build(v, 2 * node, s, mid);
        build(v, 2 * node + 1, mid + 1, e);
        tree[node] = min(tree[2 * node], tree[2 * node + 1]);
    }


    void propagate(int node, int s, int e)
    {
        if (lazy[node] != 0) {
            tree[node] += lazy[node];
            if (s != e) {
                lazy[2 * node] += lazy[node];
                lazy[2 * node + 1] += lazy[node];
            }
            lazy[node] = 0;
        }
    }

    void range_update(int node, int s, int e, int l, int r, int val)
    {
        propagate(node, s, e);
        if (e < l || r < s) {
            return;
        }

        if (l <= s && e <= r) {
            lazy[node] += val;
            propagate(node, s, e);
            return;
        }
        int mid = (s + e) / 2;
        range_update(2 * node, s, mid, l, r, val);
        range_update(2 * node + 1, mid + 1, e, l, r, val);
        tree[node] = min(tree[2 * node], tree[2 * node + 1]);
    }

    int range_query(int node, int s, int e, int l, int r)
    {
        if (e < l || r < s) {
            return inf;
        }
        propagate(node, s, e);
        if (l <= s && e <= r) {
            return tree[node];
        }
        int mid = (s + e) / 2;
        int left = range_query(2 * node, s, mid, l, r);
        int right = range_query(2 * node + 1, mid + 1, e, l, r);
        return min(left, right);
    }

    int query(int l, int r)
    {
        return range_query(1, 0, n - 1, l, r);
    }
    int update(int l, int r, int val)
    {
        range_update(1, 0, n - 1, l, r, val);
    }

};


signed main()
{
    fio;
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto& i : v) {
        cin >> i;
    }
    segmentTree st(v);

    int q;
    cin >> q;
    cin.ignore();
    while(q--) {
        string str;
        getline(cin, str);
        stringstream ss(str);
        int l, r, val = inf;
        ss >> l >> r >> val;
        if (val != inf) {
            if (l <= r) {
                st.update(l, r, val);
            } else {
                st.update(l, n - 1, val);
                st.update(0, r, val);
            }
        } else {
            if (l <= r) {
                cout << st.query(l, r) << '\n';
            } else {
                cout << min(st.query(l, n - 1), st.query(0, r)) << '\n';
            }
        }
    }
    return 0;
}


