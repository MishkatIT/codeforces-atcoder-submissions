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
    if(len == 1 && k != 0)
    {
        cout << 0;
        return 0;
    }
    if(k > 0)
        if (str[0] != '1')
            str[0] = '1';
        else
            k++;
    for (int i = 1; i < k; i++)
    {
        if(str[i] != '0')
            str[i] = '0';
        else
            k++;
        if(i + 1 == len)
            break;
    }
    cout << str;
    return 0;
}

