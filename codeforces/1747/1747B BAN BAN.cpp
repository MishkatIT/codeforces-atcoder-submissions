/*
    author    : MishkatIT
    created   : Friday 2022-11-04-21.34.17
    problem   : 1747 B. BAN BAN
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
        long long n, ans, i, j;
        cin >> n;
        i = 2;
        j = 3 * n;
        ans = 0;
        vector<pair<long long, long long>> vp;
        while(i<j)
        {
            vp.push_back({i, j});
            i += 3;
            j -= 3;
            ans++;
        }
        cout << (n + 1) / 2 << '\n';
        for( i = 0; i < ans; i++)
        {
            cout << vp[i].first << " " << vp[i].second << '\n';
        }
    }
    return 0;
}

