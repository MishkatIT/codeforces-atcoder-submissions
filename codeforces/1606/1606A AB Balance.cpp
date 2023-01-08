/*
    author    : MishkatIT
    created   : Sunday 2023-01-08-23.14.43
    problem   : A. AB Balance
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
        str.back() = str.front();
        cout << str << '\n';
    }
    return 0;
}

