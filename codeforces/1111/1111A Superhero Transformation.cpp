/*
    author    : MishkatIT
    created   : Wednesday 2022-12-21-20.04.52
    problem   : A. Superhero Transformation
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    string s, t;
    cin >> s >> t;
    if(s.size() != t.size())
    {
        cout << "NO" << '\n';
        return 0;
    }
    string x = "aeiou";
    map<char, bool> mp;
    for (auto& i: x)
    {
        mp[i] = true;
    }
    bool ok = true;
    for (int i = 0; i < s.size(); i++)
    {
        if(mp[s[i]])
        {
            if(!mp[t[i]])
            {
                ok = false;
                break;
            }
        }
        if(!mp[s[i]])
        {
            if(mp[t[i]])
            {
                ok = false;
                break;
            }
        }
    }
    cout << (ok ? "YES" : "NO") << '\n';

    return 0;
}
