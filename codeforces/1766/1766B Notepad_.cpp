/*
    author    : MishkatIT
    created   : Monday 2022-12-12-21.51.06
    problem   : B. Notepad
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
        bool ok = false;
        for(int i = 0; i < n - 3; i++)
        {
            for (int j = (i + 2); j < (n - 1); j++)
            {
                if(str[i] == str[j])
                    if(str[i + 1] == str[j + 1])
                    {
                        ok = true;
                        goto en;
                    }
            }
        }
en:
        cout << (ok ? "YES" : "NO") << '\n';

    }
    return 0;
}
