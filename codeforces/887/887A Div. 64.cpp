/*
    author    : MishkatIT
    created   : Friday 2022-12-23-20.52.56
    problem   : A. Div. 64
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    string str;
    cin >> str;
    bool one = false;
    int cnt = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if(str[i] == '1')
            one = true;
        if(one && str[i] == '0')
            cnt++;
    }
    if(cnt >= 6)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
    return 0;
}

