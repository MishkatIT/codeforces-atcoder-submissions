/*
    author    : MishkatIT
    created   : Friday 2024-03-01-23.03.25
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

struct idx {
    int one = 0;
    long long sum = 0;
};

class SegmentTree
{

public:
    vector<idx> tree;
    int n;

    SegmentTree(vector<int>& arr)
    {
        n = arr.size();
        tree.assign(4 * n, idx());
        build(arr, 1, 0, n - 1);
    }

    void build(vector<int>& arr, int node, int s, int e)
    {
        if (s == e) {
            tree[node].sum = arr[s];
            tree[node].one = (arr[s] == 1);
            return;
        }
        int mid = (s + e) >> 1;
        build(arr, 2 * node, s, mid);
        build(arr, 2 * node + 1, mid + 1, e);
        tree[node].sum = tree[2 * node].sum + tree[2 * node + 1].sum;
        tree[node].one = tree[2 * node].one + tree[2 * node + 1].one;
    }

    idx query(int node, int s, int e, int l, int r)
    {
        if (l > e || r < s) {
            idx temp;
            return temp;
        }
        if (l <= s && e <= r) {
            return tree[node];
        }
        int mid = (s + e) >> 1;
        idx left = query(2 * node, s, mid, l, r);
        idx right = query(2 * node + 1, mid + 1, e, l, r);
        idx temp;
        temp.sum = (left.sum + right.sum);
        temp.one = (left.one + right.one);
        return temp;
    }
    idx query(int l, int r)
    {
        return query(1, 0, n - 1, l, r);
    }
};


signed main()
{
    fio;
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<int> v(n);
        for (auto& i : v) {
            cin >> i;
        }
        SegmentTree st(v);
        while(q--) {
            int l, r;
            cin >> l >> r;
            --l, --r;
            idx temp = st.query(l, r);
            int one = temp.one;
            int rem = (r - l + 1 - one);
            ll sum = temp.sum;
            bool ok = true;
            ok &= (l != r);
            sum -= (one * 2);
            ok &= (sum >= rem);
            if (!ok) {
                cout << "NO" << '\n';
            } else {
                cout << "YES" << '\n';
            }
        }
    }
    return 0;
}


