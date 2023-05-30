/*
    author    : MishkatIT
    created   : Tuesday 2023-05-30-21.37.47
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
        int n, t;
        cin >> n >> t;
        vector<pair<int, int>> v(n);
        int mx = t / 2;
        int same = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            same += (x == mx);
            v[i] = {x, i};
        }
        sort(v.begin(), v.end());
        vector<int> ans(n);
        if(t & 1)
        {
            for (int i = 0; i < n && v[i].first < mx + 1; i++)
            {
                ans[v[i].second ]= 1;
            }
        }
        else
        {
            int cnt = (same + 1) / 2;
            for (int i = 0; i < n; i++)
            {
                if(v[i].first < mx)
                {
                    ans[v[i].second] = 1;
                }
                else if (v[i].first == mx && cnt--)
                {
                    ans[v[i].second] = 1;
                }
                else break;
            }
        }
        for (int i = 0; i < n; i++)
            cout << ans[i] << " \n"[i == n - 1];
    }
    return 0;
}

