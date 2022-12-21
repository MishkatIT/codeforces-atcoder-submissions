/*
    author    : MishkatIT
    created   : Wednesday 2022-12-21-23.14.24
    problem   : C. Given Length and Sum of Digits
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int m, s;
    cin >> m >> s;
    if(s > m * 9)
    {
        cout << "-1 -1";
        return 0;
    }
    else if(s == 0)
    {
        if(m == 1)
        {
            cout << "0 0";
            return 0;
        }
        else
        {
            cout << "-1 -1";
            return 0;
        }
    }
    string mx;
    for (int i = 0; i < m; i++)
    {
        mx.push_back(min(9, s) + '0');
        s -= min(s, 9);
    }
    string mn;
    mn = mx;
    reverse(mn.begin(), mn.end());
    if(mn[0] == '0')
    {
        for (int i = 0; i < m; i++)
        {
            if(mn[i] != '0')
            {
                mn[i]--;
                break;
            }
        }
        mn[0]++;
    }
    cout << mn << ' ' << mx;

    return 0;
}

