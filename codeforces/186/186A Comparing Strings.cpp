/*
    author    : MishkatIT
    created   : Thursday 2023-01-26-01.15.53
    problem   : A. Comparing Strings
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    string sa, sb;
    cin >> sa >> sb;
    if(sa == sb)
    {
        cout << "YES" << '\n';
        return 0;
    }
    if(sa.length() != sb.length())
    {
        cout << "NO" << '\n';
        return 0;
    }
    map<char, int> mp;
    int len = sa.length();
    int cnt = 0, i;
    for (i = 0; i < len; i++)
    {
        if(sa[i] != sb[i])
        {
            mp[sa[i]]++;
            mp[sb[i]]++;
            cnt++;
        }
        if(cnt == 2)
            break;
    }
    bool ok = true;
    if((int)mp.size() == 2)
    {
        for(auto& i: mp)
            if(i.second != 2)
                ok = false;
    }
    else
        ok = false;
    if(i != len)
    {
        if(sa.substr(i + 1) != sb.substr(i + 1))
            ok = false;
    }
    cout << (ok ? "YES" : "NO") << '\n';
    return 0;
}

