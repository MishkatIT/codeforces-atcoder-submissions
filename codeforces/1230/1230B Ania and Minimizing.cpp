/*
    author    : MishkatIT
    created   : Thursday 2022-12-15-02.39.15
    problem   : B. Ania and Minimizing
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int len, k;
    cin >> len >> k;
    string str;
    cin >> str;
    int cnt = 0;
    for (int i = 0; cnt < k; i++)
    {
        if(i == 0)
        {
            if(str[i] != '1')
            {
                str[i] = '1';
                cnt++;
            }
            if(len == 1)
                str[i] = '0', cnt++;
            continue;
        }
        if(str[i] != '0')
            str[i] = '0', cnt++;
        if(i + 1 == len)
            break;
    }
    cout << str;
    return 0;
}

