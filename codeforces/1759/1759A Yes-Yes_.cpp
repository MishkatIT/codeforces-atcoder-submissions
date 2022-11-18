/*
    author    : MishkatIT
    created   : Friday 2022-11-18-20.40.31
    problem   : 1759 A. Yes-Yes
*/
#include<iostream>
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
        int len = str.length();
        int x;
        if (str[0] == 'Y')
            x = 0;
        else if (str[0] == 'e')
            x = 1;
        else if (str[0] == 's')
            x = 2;
        else
        {
            cout << "NO" << '\n';
            continue;
        }
        string s = "Yes";
        bool ok = true;
        for(int i = 0; i < len; i++)
        {
            if(s[x] != str[i])
            {
                ok = false;
                break;
            }
            x++;
            if(x == 3)
                x = 0;
        }
        if(ok)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}



