/*
    author    : MishkatIT
    created   : Thursday 2023-11-02-17.28.07
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll        = long long;
using ld        = long double;
const ll mod    = 1e9 + 7;
const ll N      = 1e5 + 10;
const ll inf    = 1e9;
const ll linf   = 1e18;


class SegmentTree
{
public:
    vector<int> tree;
    int n;
    int type;
    SegmentTree(vector<int>& arr, int x)
    {
        n = arr.size();
        type = (x & 1);
        tree.assign(4 * n, 0);
        build(arr, 1, 0, n - 1, type);
    }

    void build(vector<int>& arr, int node, int s, int e, int isOr)
    {
        if (s == e) {
            tree[node] = arr[s];
        } else {
            int mid = (s + e) / 2;
            build(arr, 2 * node, s, mid, !isOr);
            build(arr, 2 * node + 1, mid + 1, e, !isOr);
            if (isOr) {
                tree[node] = (tree[2 * node] | tree[2 * node + 1]);
            } else {
                tree[node] = (tree[2 * node] ^ tree[2 * node + 1]);
            }
        }
    }

    void update(int node, int s, int e, int pos, int val, int isOr)
    {
        if(s == e) {
            tree[node] = val;
        } else {
            int mid = (s + e) / 2;
            if (pos <= mid) {
                update (2 * node, s, mid, pos, val, !isOr);
            } else {
                update (2 * node + 1, mid + 1,e, pos, val, !isOr);
            }
            if (isOr) {
                tree[node] = (tree[2 * node] | tree[2 * node + 1]);
            } else {
                tree[node] = (tree[2 * node] ^ tree[2 * node + 1]);
            }
        }
    }

    void point_update(int pos, int val)
    {
        update(1, 0, n - 1, pos, val, type);
    }

    int query()
    {
        return tree[1];
    }
};


int main()
{
    fio;
    int n, q;
    cin >> n >> q;
    vector<int> v(1 << n);
    for (auto& i : v) {
        cin >> i;
    }
    SegmentTree st(v, n);
    while (q--) {
        int pos, val;
        cin >> pos >> val;
        st.point_update(--pos, val);
        cout << st.query() << '\n';
    }
    return 0;
}

