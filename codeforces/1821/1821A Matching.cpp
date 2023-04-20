/*
    author    : MishkatIT
    created   : Friday 2023-04-21-01.01.56
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
        int ans = 1;
        for (int i = str.length() - 1; i > 0; i--)
        {
            if(str[i] == '?')
                ans *= 10;
        }
        if(str.front() == '?')
            ans *= 9;
        if(str.front() == '0')
            ans = 0;
        cout << ans << '\n';
    }
    return 0;
}

