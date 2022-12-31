/*
    author    : MishkatIT
    created   : Saturday 2022-12-31-23.25.12
    problem   : A. Fair Game
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n;
    cin >> n;
    int temp;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        mp[temp]++;
    }
    bool ok = false;
    vector<int> v(2), ans(2);
    if((int)mp.size() == 2)
    {
        int x = 0;
        for (auto&i : mp)
        {
            v[x] = i.second;
            ans[x] = i.first;
            x++;
        }
        if(v[0] == v[1])
            ok = true;
    }
    if(ok)
    {
        cout << "YES" << '\n';
        cout << ans[0] << ' ' << ans[1];
    }
    else
        cout << "NO" << '\n';
    return 0;
}

