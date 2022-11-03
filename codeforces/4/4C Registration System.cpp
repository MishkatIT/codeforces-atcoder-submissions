/*
    author    : MishkatIT
    created   : Friday 2022-11-04-04.06.04
    problem   : 4 C. Registration system
*/
#include<iostream>
#include<string>
#include<map>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    map<string, int> mp;
    string str;
    while(t--)
    {
        cin >> str;
        mp[str]++;
        if(mp[str] < 2)
            cout << "OK" << '\n';
        else
            cout << str << mp[str] - 1 << '\n';

    }

    return 0;
}

