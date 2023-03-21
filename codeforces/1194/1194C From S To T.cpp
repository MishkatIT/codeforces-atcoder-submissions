/*
    author    : MishkatIT
    created   : Tuesday 2023-03-21-17.26.34
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
        string s, t, p;
        cin >> s >> t >> p;
        map<char, int> mp;
        for(auto &i : p)
            mp[i]++;
        bool ok = true;
        for(int i = 0; i < t.length(); i++)
        {
            if(s.front() == t[i])
            {
                s.erase(s.begin());
            }
            else if(mp[t[i]])
                mp[t[i]]--;
            else
            {
                ok = false;
                break;
            }
        }
        if(s.length())
            ok = false;
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}

