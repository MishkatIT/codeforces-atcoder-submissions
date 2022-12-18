/*
    author    : MishkatIT
    created   : Sunday 2022-12-18-20.36.53
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
        cout << str[0] - '0' + str[2] - '0' << '\n';
    }
    return 0;
}

