/*
    author    : MishkatIT
    created   : Sunday 2022-11-13-22.14.52
    problem   : 798 A. Mike and palindrome
*/
#include<iostream>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    string str;
    cin >> str;
    bool ok = true;
    int cnt = 0;
    for (int i = 0; i < str.length() / 2; i++)
    {
        if(str[i] != str[str.length() - 1 - i])
        {
            cnt++;
            if(cnt > 1)
            {
                ok = false;
                break;
            }
        }
    }
    if(cnt < 1 && !(str.length() & 1))
        ok = false;
    cout << (ok ? "YES" : "NO") << '\n';

    return 0;
}



