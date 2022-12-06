/*
    author    : MishkatIT
    created   : Tuesday 2022-12-06-22.30.16
    problem   : 489 B. BerSU Ball
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n;
    cin >> n;
    int a;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        mp[a]++;
    }
    int m;
    cin >> m;
    int b[m];
    int cnt = 0;
    for (int i = 0; i < m; i++)
        cin >> b[i];
    sort(b, b + m);
    for (int i = 0; i < m; i++)
    {
        if(mp[b[i] - 1] > 0)
        {
            cnt++;
            mp[b[i] - 1]--;
        }
        else if(mp[b[i]] > 0)
        {
            cnt++;
            mp[b[i]]--;
        }
        else if(mp[b[i] + 1] > 0)
        {
            cnt++;
            mp[b[i] + 1]--;
        }
    }
    cout << cnt;
    return 0;
}

