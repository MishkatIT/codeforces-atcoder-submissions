/*
    author    : MishkatIT
    created   : Monday 2022-10-24-00.42.23
    problem   : 474 A. Keyboard
*/
#include<iostream>
#include<string>
#include<algorithm>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fio;
    string s="qwertyuiopasdfghjkl;zxcvbnm,./";
    string str, d;
    cin >> d >> str;
    int dis;
    if(d[0]=='R')
        dis = 1;
    else
        dis = -1;
    for(int i=0; i<str.length(); i++)
        for(int j=0; j<s.length(); j++)
        {
            if(str[i]==s[j])
            {
                cout << s[j-dis];
                break;
            }

        }
    return 0;
}
