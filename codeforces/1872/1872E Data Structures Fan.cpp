/*
    author    : MishkatIT
    created   : Saturday 2023-11-11-20.09.22
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

struct node {
    int zero, one;
    node(int a = 0, int b = 0)
    {
        zero = a;
        one = b;
    }
};

class SegmentTree
{
public:
    vector<node> tree;
    vector<int> lazy;
    int n;

    SegmentTree(vector<int>& arr, string& str)
    {
        n = arr.size();
        tree.assign(4 * n + 10, node());
        lazy.assign(4 * n + 10, 0);
        build(arr, 1, 0, n - 1, str);
    }

    node combine(node x, node y)
    {
        node res;
        res.one = x.one ^ y.one;
        res.zero = x.zero ^ y.zero;
        return res;
    }

    void build(vector<int>& arr, int cur, int s, int e, string& str)
    {
        if (s == e) {
            if (str[s] == '0') {
                tree[cur].zero = arr[s];
            } else {
                tree[cur].one = arr[s];
            }
            return;
        }
        int mid = (s + e) >> 1;
        build(arr, 2 * cur, s, mid, str);
        build(arr, 2 * cur + 1, mid + 1, e, str);
        tree[cur] = combine(tree[2 * cur], tree[2 * cur + 1]);
    }

    void propagate(int cur, int s, int e)
    {
        if (lazy[cur] != 0) {
            swap(tree[cur].zero, tree[cur].one);
            if (s != e) {
                lazy[2 * cur] ^= 1;
                lazy[2 * cur + 1] ^= 1;
            }
            lazy[cur] = 0;
        }
    }

    void update(int cur, int s, int e, int l, int r)
    {
        propagate(cur, s, e);
        if (l > e || r < s) {
            return;
        }
        if (l <= s && e <= r) {
            lazy[cur] ^= 1;
            propagate(cur, s, e);
            return;
        }
        int mid = (s + e) >> 1;
        update(cur * 2, s, mid, l, r);
        update(cur * 2 + 1, mid + 1, e, l, r);
        tree[cur] = combine(tree[cur * 2], tree[cur * 2 + 1]);
    }



    void update(int l, int r)
    {
        update(1, 0, n - 1, l, r);
    }
    int query(int g)
    {
        if (g == 0) {
            return tree[1].zero;
        } else {
            return tree[1].one;
        }
    }
};


int main()
{
    fio;
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto& i : v) {
            cin >> i;
        }
        string str;
        cin >> str;
        SegmentTree st(v, str);
        int q;
        cin >> q;
        while (q--) {
            int tp;
            cin >> tp;
            if (tp == 1) {
                int l, r;
                cin >> l >> r;
                --l, --r;
                st.update(l, r);
            } else {
                int g;
                cin >> g;
                cout << st.query(g) << ' ';
            }
        }
        cout << '\n';
    }
    return 0;
}

