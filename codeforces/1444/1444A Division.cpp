/*
    author    : MishkatIT
    created   : Thursday 2022-12-01-16.01.15
    problem   : 1444 A. Division
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
using namespace std;

void findX(int p, int q)
{
    map<int, int> mp;
    while(q % 2 == 0)
    {
        q /= 2;
        mp[2]++;
    }
    for(int i = 3; i * i <= q; i += 2)
    {
        if (q % i == 0)
            while(q % i == 0)
            {
                q /= i;
                mp[i]++;
            }
    }
    if (q > 1)
        mp[q]++;

    int ans = 0;
    for(auto i: mp)
    {
        int freq = i.second;
        int temp = p;
        int cur = 0;
        while(temp % i.first == 0)
        {
            temp /= i.first;
            cur++;
        }
        if(cur < freq)
        {
            ans = p;
            break;
        }
        temp = p;
        for (int j = cur; j >= freq; j--)
            temp /= i.first;
        ans = max(temp, ans);
    }
    cout << ans << '\n';
    return;
}

signed main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int p, q;
        cin >> p >> q;
        findX(p, q);
    }
    return 0;
}

