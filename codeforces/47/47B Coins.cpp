/*
    author    : MishkatIT
    created   : Thursday 2022-12-08-00.20.19
    problem   : 47 B. Coins
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    vector<string> v(3);
    for(auto &i: v)
        cin >> i;
    map<char, int> mp = {{'A', 1}, {'B', 1}, {'C', 1}};
    for(auto i: v)
    {
        if(i[1] == '<')
        {
            mp[i[0]]--;
            mp[i[2]]++;
        }
        else
        {
            mp[i[0]]++;
            mp[i[2]]--;
        }
    }
    bool ok = true;
    for(auto i: v)
    {
        if(i[1] == '<')
            ok &= (mp[i[0]] < mp[i[2]]);
        else
            ok &= (mp[i[0]] > mp[i[2]]);
    }
    if(ok)
    {
        map<int, char> ans;
        for(auto i: mp)
            ans[i.second] = i.first;
        for(auto i: ans)
            cout << i.second;
    }
    else
        cout << "Impossible";
    return 0;
}
