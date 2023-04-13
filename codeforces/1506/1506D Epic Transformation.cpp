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
        priority_queue<int> pq;
        for(auto &i : mp)
        {
            pq.push(i.second);
        }
        int ans = n;
        while(pq.size() > 1)
        {
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
            a--;
            b--;
            ans -= 2;
            if(a)
                pq.push(a);
            if(b)
                pq.push(b);
        }
        cout << ans << '\n';
    }
    return 0;
}

