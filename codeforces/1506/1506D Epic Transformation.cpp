/*
    author    : MishkatIT
    created   : Thursday 2023-04-13-06.13.09
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        priority_queue<pair<int, int>> pq;
        for(auto &i : mp)
        {
            pq.push({i.second, i.first});
        }
        int ans = n;
        while(pq.size() > 1)
        {
            auto a = pq.top();
            pq.pop();
            auto b = pq.top();
            pq.pop();
            a.first--;
            b.first--;
            ans -= 2;
            if(a.first)
                pq.push({a.first, a.second});
            if(b.first)
                pq.push({b.first, b.second});
        }
        cout << ans << '\n';
    }
    return 0;
}

