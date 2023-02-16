/*
    author    : MishkatIT
    created   : Thursday 2023-02-16-16.56.01
*/
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
#define int long long
using namespace std;
signed main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n, l, r;
        cin >> n >> l >> r;
        vector<int> v(n);
        for(auto& i: v)
            cin >> i;
        ordered_set s;
        int ans = 0;
        int frequency = 0;
        int low, high;
        for (int i = n - 1; i >= 0; i--)
        {
            low = s.order_of_key({l - v[i], -1});
            high = s.order_of_key({r - v[i], INT_MAX});
            s.insert({v[i], frequency++});
            ans += (high - low);
        }
        cout << ans << '\n';
    }
    return 0;
}

