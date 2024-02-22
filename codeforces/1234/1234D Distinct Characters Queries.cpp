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

struct freq {
    vector<int> f = vector<int> (26, 0);
};

class SegmentTree
{
public:
    vector<freq> tree;
    int n;

    SegmentTree()
    {
        n = str.size();
        tree.assign(4 * n, freq());
        build(1, 0, n - 1);
    }

    void build(int node, int s, int e)
    {
        if (s > e) return;
        if (s == e) {
            tree[node].f[getInt(str[s])]++;
        } else {
            int mid = (s + e) / 2;
            build(2 * node, s, mid);
            build(2 * node + 1, mid + 1, e);
            for (int i = 0; i < 26; i++) {
                tree[node].f[i] = tree[2 * node].f[i] + tree[2 * node + 1].f[i];
            }
        }
        return;
    }

    void update(int node, int s, int e, int l, int r, char val)
    {
        if (l > e || r < s) {
            return;
        }
        if (s == e) {
            tree[node].f[getInt(str[s])]--;
            str[s] = val;
            tree[node].f[getInt(str[s])]++;
            return;
        }
        int mid = (s + e) / 2;
        update(2 * node, s, mid, l, r, val);
        update(2 * node + 1, mid + 1, e, l, r, val);
        for (int i = 0; i < 26; i++) {
            tree[node].f[i] = tree[2 * node].f[i] + tree[2 * node + 1].f[i];
        }
        return;
    }

    freq query(int node, int s, int e, int l, int r)
    {
        if (l > e || r < s) {
            freq x;
            return x;
        }
        if (l <= s && e <= r) {
            return tree[node];
        }
        int mid = (s + e) / 2;
        freq left = query(2 * node, s, mid, l, r);
        freq right = query(2 * node + 1, mid + 1, e, l, r);
        freq x;
        for (int i = 0; i < 26; i++) {
            x.f[i] = left.f[i] + right.f[i];
        }
        return x;
    }

    void range_update(int l, int r, char val)
    {
        update(1, 0, n - 1, l, r, val);
    }

    freq range_query(int l, int r)
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
            freq x = st.range_query(l, r);
            int uni = 0;
            for (auto& i : x.f) {
                uni += (i != 0);
            }
            cout << uni << '\n';
        }

    }
    return 0;
}
