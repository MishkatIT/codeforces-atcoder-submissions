/*
    author    : MishkatIT
    created   : Tuesday 2023-01-03-20.43.05
    problem   : A. Hall of Fame
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
        string str;
        cin >> str;
        set<char> s;
        for (auto &i: str)
            s.insert(i);
        if(s.size() == 1)
        {
            cout << - 1 << '\n';
            continue;
        }
        bool ok = false;
        for (int i = 0; i < n - 1; i++)
        {
            if(str[i] == 'R' && str[i + 1] == 'L')
            {
                cout << 0 << '\n';
                ok = true;
                break;
            }
            else if(str[i] == 'L' && str[i + 1] == 'R')
            {
                cout << i + 1 << '\n';
                ok = true;
                break;
            }
        }
        if(!ok)
            cout << -1 << '\n';
    }
    return 0;
}

