/*
    author    : MishkatIT
    created   : Monday 2022-12-05-21.15.38
    problem   : 1153 A. Serval and Bus
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
using namespace std;
signed main()
{
    fio;
    int n, t;
    cin >> n >> t;
    int s, d;
    map<int, int> mp;
    for (int i = 1; i <= n; i++)
    {
        cin >> s >> d;
        if(s >= t)
            mp[s] = i;
        else
        {
            int temp = ceil((t - s) / (double) d);
            mp[s +(temp * d)] = i;
        }
    }
    for(auto i: mp)
    {
        cout << i.second << '\n';
        break;
    }
    return 0;
}

