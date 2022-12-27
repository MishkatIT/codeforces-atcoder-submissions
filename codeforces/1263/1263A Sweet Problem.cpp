/*
    author    : MishkatIT
    created   : Wednesday 2022-12-28-01.16.18
    problem   : A. Sweet Problem
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        vector<long long> v(3);
        for (auto& i: v)
            cin >> i;
        int ans = 0;
        long long temp;
        sort(v.rbegin(), v.rend());
        if(v[0] > v[1])
        {
            temp = v[0] - v[1];
            long long mn = min(temp, v[2]);
            ans += mn;
            v[0] -= mn;
            v[2] -= mn;
        }
        sort(v.rbegin(), v.rend());
        if(v[1] > 0)
        {
            temp = v[2] / 2;
            ans += temp * 2;
            v[0] -= temp;
            ans += min(v[0], v[1]);
        }
        cout << ans << '\n';
    }
    return 0;
}

