/*
    author    : MishkatIT
    created   : Monday 2022-11-28-17.15.56
    problem   : 1765 B. Broken Keyboard
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
        int len;
        cin >> len;
        string str;
        cin >> str;
        bool ok = true;
        for (int i = 1; i < len; i += 3)
        {
            if(i + 1 < len)
                ok &= (str[i] == str[i + 1]);
            else
                ok = false;

        }
        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}



