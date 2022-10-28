/*
    author    : MishkatIT
    created   : Saturday 2022-10-29-03.28.24
    problem   : 94 A. Restoring Password
*/
#include<iostream>
#include<string>
#include<unordered_map>
#include<cstring>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    string str, subst;
    cin >> str;
    unordered_map<string, int>mp;
    int temp = 0;
    for(int i = 0; i < 10; i++)
    {
        cin >> subst;
        mp[subst] = temp;
        temp++;
    }
    for(int i = 0; i < 8; i++)
    {
        string s;
        int x = i*10;
        int y = x+10;
        for(int i = x; i < y; i++)
            s.push_back(str[i]);
        cout << mp[s];

    }

}



