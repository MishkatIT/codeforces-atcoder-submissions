/*
    author    : MishkatIT
    created   : Sunday 2023-03-19-21.04.14
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
        int t = '0';
        for (int i = 0; i < n; i++)
        {
            if(str[i] >= 'a' && str[i] <= 'z')
            {
                char temp = str[i];
                for(int j = 0; j < n; j++)
                {
                    if(str[j] == temp)
                        str[j] = t;
                }
            }
            if(t == '0') t = '1';
            else t = '0';
        }
        char x = '0';
        bool ok = true;
        for(int i = 0; i < n; i++)
        {
            if(str[i] == x)
            {
                if(x == '0') x = '1';
                else x = '0';
            }
            else
            {
                ok = false;
                break;
            }

        }
        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}
