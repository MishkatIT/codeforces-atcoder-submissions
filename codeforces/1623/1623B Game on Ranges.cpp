/*
    author    : MishkatIT
    created   : Wednesday 2023-06-14-20.49.25
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
        deque<pair<int, int>> dq, ans(n + 10);
        vector<bool> track(1010);
        for (int i = 0; i < n; i++)
        {
            int l, r;
            cin >> l >> r;
            if(l == r)
            {
                ans[l] = {l, r};
                track[l] = true;
            }
            else
            {
                dq.push_back({l, r});
            }
        }
        while(!dq.empty())
        {
//        cout << 'x';
            pair<int, int> cur = {dq.front().first, dq.front().second};
            dq.pop_front();
            int pos = -1;
            int blank = 0;
            for (int i = cur.first; i <= cur.second; i++)
            {
                if(!track[i])
                {
                    pos = i;
                    blank++;
                }
            }
            if(blank == 1)
            {
                ans[pos] = cur;
                track[pos] = true;
            }
            else
            {
                dq.push_back(cur);
            }
        }
        for (int i = 1; i <= n; i++)
        {
            cout << ans[i].first << ' ' << ans[i].second << ' ' << i << '\n';
        }
    }
    return 0;
}

