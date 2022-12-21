/*
    author    : MishkatIT
    created   : Wednesday 2022-12-21-20.25.30
    problem   : A. Broken Keyboard
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
        string str;
        cin >> str;
        set<char> s;
        for(int i = 0; i < str.length();)
        {
            if(i + 1 < str.length())
            {
                if(str[i] == str[i + 1])
                {
                    i += 2;
                }
                else
                {
                    s.insert(str[i]);
                    i++;
                }
            }
            else
            {
                s.insert(str[i]);
                i++;
            }
        }
        for (auto& i: s)
            cout << i;
        cout << '\n';
    }
    return 0;
}

