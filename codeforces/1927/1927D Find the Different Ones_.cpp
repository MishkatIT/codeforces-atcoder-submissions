#include <bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 2e5 + 10;
class SegmentTree
{
public:
    vector<long long> tree;
    int n;
    int mode;
    SegmentTree(vector<int>& arr, int m)
    {
        mode = m;
        n = arr.size();
        tree.assign(4 * n, 0);
        build(arr, 1, 0, n - 1);
    }

    void build(vector<int>& arr, int node, int s, int e)
    {
        if (s == e)
        {
            tree[node] = arr[s];
        }
        else
        {
            int mid = (s + e) / 2;
            build(arr, 2 * node, s, mid);
            build(arr, 2 * node + 1, mid + 1, e);
            if (mode == -1)
            {
                tree[node] = min(tree[2 * node], tree[2 * node + 1]);

            }
            else
            {
                tree[node] = max(tree[2 * node], tree[2 * node + 1]);

            }
        }
    }




    long long query(int node, int s, int e, int l, int r)
    {

        if (l > e || r < s)
        {
            if (mode == -1)
            {
                return INT_MAX;
            }
            else
            {
                return INT_MIN;
            }
        }
        if (l <= s && e <= r)
        {
            return tree[node];
        }
        int mid = (s + e) / 2;
        long long leftt = query(2 * node, s, mid, l, r);
        long long rightt = query(2 * node + 1, mid + 1, e, l, r);
        if (mode == -1)
        {
            return min(leftt, rightt);
        }
        else
        {
            return max(leftt, rightt);
        }

    }

    long long range_query(int l, int r)
    {
        return query(1, 0, n - 1, l, r);
    }
};



int main()
{
    fio;

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        map<int, vector<int>> pos;

        for (int i = 0; i < n; i++)
        {
            pos[arr[i]].push_back(i);
        }

        SegmentTree segMin(arr, -1);
        SegmentTree segMax(arr, 1);

        int q;
        cin >> q;

        while(q--)
        {
            int l, r;
            cin >> l >> r;
            l--, r--;
            int mn = segMin.range_query(l, r);
            int mx = segMax.range_query(l, r);
            if (mn == mx)
            {
                cout << "-1 -1" << '\n';
            }
            else
            {
                int f = *lower_bound(pos[mn].begin(), pos[mn].end(), l);
                int s = *lower_bound(pos[mx].begin(), pos[mx].end(), l);
                cout << f + 1 << ' ' << s + 1 << '\n';
            }
        }
        cout << '\n';
    }
    return 0;
}
