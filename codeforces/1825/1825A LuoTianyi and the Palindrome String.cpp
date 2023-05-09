/*
    author    : MishkatIT
    created   : Monday 2023-05-08-18.00.45
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
        int n = str.length();
        set<char> s;
        bool ok = true;
        for (int i = 0; i < n / 2; i++)
        {
            s.insert(str[i]);
            if(str[i] != str[n - 1 - i])
            {
                ok = false;
            }
        }
        s.insert(str[(n / 2)]);
        if(s.size() == 1)
        {
            cout << -1 << '\n';
            continue;
        }
        if(ok)
            cout << n - 1 << '\n';
        else
            cout << n << '\n';
    }

    return 0;
}
