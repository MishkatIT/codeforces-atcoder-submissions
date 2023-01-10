/*
    author    : MishkatIT
    created   : Tuesday 2023-01-10-17.04.42
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
        if(str[1] == 'b')
        {
            cout << str.front() << ' ';
            str.erase(str.begin());
            char c = str.back();
            str.pop_back();
            cout << str << ' ' << c << '\n';
        }
        else
        {
            cout << str[0] << ' ' << str[1] << ' ';
            str.erase(0, 2);
            cout << str << '\n';
        }
    }
    return 0;
}
