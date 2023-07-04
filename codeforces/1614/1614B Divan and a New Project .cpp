/*
    author    : MishkatIT
    created   : Tuesday 2023-07-04-18.40.20
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;
const ll N = 1e5 + 10;
const ll inf = 1e9;
const ll linf = 1e18;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>>v(n);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v[i] = {x, i};
        }
        sort(v.rbegin(), v.rend());
        ll sum = 0;
        for (int x = 1, i = 0; i < n; i++)
        {
            sum += x * 2 * 1LL * v[i].first;
            x += (i & 1);
        }
        cout << sum << '\n';
        cout << 0 << ' ';
        vector<int> ans(n);
        for (int x = 1, i = 0; i < n; i++)
        {
            if (i & 1) ans[v[i].second] = x;
            else ans[v[i].second] = -x;
            x += (i & 1);
        }
        for (int i = 0; i < n; i++)
            cout << ans[i] << " \n"[i == n - 1];
    }
    return 0;
}
