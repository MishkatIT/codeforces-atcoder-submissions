/*
    author    : MishkatIT
    created   : Sunday 2022-12-04-21.14.22
    problem   : 1355 B. Young Explorers
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
        int n;
        cin >> n;
        int a;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            mp[a]++;
        }
        int ans = 0;
        int temp = 0;
        for (auto i: mp)
        {
            i.second += temp;
            ans += (i.second / i.first);
            temp = (i.second % i.first);
        }
        cout << ans << '\n';
    }
    return 0;
}

