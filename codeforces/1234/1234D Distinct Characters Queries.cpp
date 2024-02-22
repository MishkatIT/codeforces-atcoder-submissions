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

string str;

int getInt(char c)
{
    return (int)(c - 'a');
}

struct Node {
    vector<bool> lazy = vector<bool>(26, false);
    vector<bool> freq = vector<bool>(26, false);
};

class SegmentTree
{
public:
    vector<Node> tree;
    int n;

    SegmentTree()
    {
        n = str.size();
        tree.assign(4 * n, Node());
        build(1, 0, n - 1);
    }

    void build(int node, int s, int e)
    {
        if (s > e) return;
        if (s == e) {
            tree[node].freq[getInt(str[s])] = true;
        } else {
            int mid = (s + e) / 2;
            build(2 * node, s, mid);
            build(2 * node + 1, mid + 1, e);
            for (int i = 0; i < 26; i++) {
                tree[node].freq[i] = tree[2 * node].freq[i] | tree[2 * node + 1].freq[i];
            }
        }
        return;
    }

    void propagate(int node, int s, int e)
    {
        if (tree[node].lazy == vector<bool>(26, false)) return;

        for (int i = 0; i < 26; i++) {
            if (tree[node].lazy[i]) {
                tree[node].freq[i] = true;
            }
        }

        if (s != e) {
            for (int i = 0; i < 26; i++) {
                if (tree[node].lazy[i]) {
                    tree[2 * node].lazy[i] = tree[2 * node + 1].lazy[i] = true;
                }
            }
        }

        tree[node].lazy = vector<bool>(26, false);
    }

    void update(int node, int s, int e, int l, int r, char val)
    {
        propagate(node, s, e);

        if (l > e || r < s) {
            return;
        }
        if (l <= s && e <= r) {
            for (int i = 0; i < 26; i++) {
                if (i == getInt(val)) {
                    tree[node].freq[i] = true;
                } else {
                    tree[node].freq[i] = false;
                }
            }

            if (s != e) {
                tree[2 * node].lazy[getInt(val)] = tree[2 * node + 1].lazy[getInt(val)] = true;
            }

            return;
        }
        int mid = (s + e) / 2;
        update(2 * node, s, mid, l, r, val);
        update(2 * node + 1, mid + 1, e, l, r, val);
        for (int i = 0; i < 26; i++) {
            tree[node].freq[i] = tree[2 * node].freq[i] | tree[2 * node + 1].freq[i];
        }
        return;
    }

    Node query(int node, int s, int e, int l, int r)
    {
        propagate(node, s, e);

        if (l > e || r < s) {
            Node x;
            return x;
        }
        if (l <= s && e <= r) {
            return tree[node];
        }
        int mid = (s + e) / 2;
        Node left = query(2 * node, s, mid, l, r);
        Node right = query(2 * node + 1, mid + 1, e, l, r);
        Node x;
        for (int i = 0; i < 26; i++) {
            x.freq[i] = left.freq[i] | right.freq[i];
        }
        return x;
    }

    void range_update(int l, int r, char val)
    {
        update(1, 0, n - 1, l, r, val);
    }

    Node range_query(int l, int r)
    {
        return query(1, 0, n - 1, l, r);
    }
};


int main()
{
    fio;
    cin >> str;
    int q;
    cin >> q;
    SegmentTree st;
    while (q--) {
        int type;
        cin >> type;
        if (type == 1) {
            int pos;
            cin >> pos;
            char c;
            cin >> c;
            st.range_update(pos - 1, pos - 1, c);
        } else {
            int l, r;
            cin >> l >> r;
            --l, --r;
            Node x = st.range_query(l, r);
            int uni = 0;
            for (int i = 0; i < 26; i++) uni += x.freq[i];
            cout << uni << '\n';
        }

    }
    return 0;
}

