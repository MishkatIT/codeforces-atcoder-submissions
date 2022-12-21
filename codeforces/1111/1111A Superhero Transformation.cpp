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
    string x = "aeiou";
    map<char, bool> mp;
    for (auto& i: x)
    {
        mp[i] = true;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if(mp[s[i]] & mp[t[i]])
        {
            t[i] = s[i];
        }
        else if(!mp[s[i]] & !mp[t[i]])
        {
            t[i] = s[i];
        }
    }
    if(s == t)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
    return 0;
}
