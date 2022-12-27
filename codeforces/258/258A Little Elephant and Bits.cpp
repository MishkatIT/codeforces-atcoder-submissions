/*
    author    : MishkatIT
    created   : Wednesday 2022-12-28-00.46.35
    problem   : A. Little Elephant and Bits
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    string str;
    cin >> str;
    int index = 0;
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == '0')
        {
            index = i;
            break;
        }
    }
    str.erase(str.begin() + index);
    cout << str;
    return 0;
}

